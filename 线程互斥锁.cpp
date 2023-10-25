#include <iostream>
#include <thread>
#include <mutex>
using namespace std;
class Test
{
private:
    int data = 0;   //共享资源

    mutex m;	//保护共享资源 

public:
    //线程函数 
    void add_data()
    {
        int c = 1000000;

        //p操作 上锁 
        m.lock();

        //临界区
        while (c--)
        {
            data++;
        }

        //v操作 解锁
        m.unlock();

    }

    int get_data() const
    {
        return data;
    }
};

int main()
{
    Test x;     //两个线程去操作同一个共享资源 

    thread t1(&Test::add_data, &x);
    thread t2(&Test::add_data, &x);

    t1.join();
    t2.join();

    cout << "data = " << x.get_data() << endl;
}
