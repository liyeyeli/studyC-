#include <iostream>
#include <mutex>
#include <chrono>   
using namespace std;

class DataPool
{
private:
    int count;  //数据的数量
    int consume_count;  //清0 阈值 

    mutex m;				//互斥锁
    condition_variable cv;	//条件变量

public:
    DataPool(const int& _c = 0, const int& _cc = 100000000) : count(_c), consume_count(_cc)
    {}

    //生产者:调用这个函数-->产生数据 ++ 
    void increment(void)
    {
        unique_lock<mutex> l(m);

        count++;

        if (count >= consume_count)
        {
            cout << "数据满了 " << endl;
            
            cv.notify_all();	//唤醒
        }
    }

    //消费者:调用这个函数-->消耗数据 置0 
    void consume(void)
    {
        unique_lock<mutex> l(m);

        if (count < consume_count)
        {
            cv.wait(l);	//等待
        }

        if (count >= consume_count)
        {
            count = 0;	//进行消耗

            cout << "已消耗(清0) " << endl;
        }
    }
};

//生产者线程
void worker(DataPool* p)
{
    while (1)
    {
        p->increment();
    }
}

//消费者线程 
void sonsumer(DataPool* p)
{
    while (1)
    {
        p->consume();
    }
}

int main()
{
    DataPool d(0, 10000000);

    thread t1(worker, &d);
    thread t2(sonsumer, &d);

    t1.join();
    t2.join();

}