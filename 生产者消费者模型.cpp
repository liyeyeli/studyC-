#include <iostream>
#include <mutex>
#include <chrono>   
using namespace std;

class DataPool
{
private:
    int count;  //���ݵ�����
    int consume_count;  //��0 ��ֵ 

    mutex m;				//������
    condition_variable cv;	//��������

public:
    DataPool(const int& _c = 0, const int& _cc = 100000000) : count(_c), consume_count(_cc)
    {}

    //������:�����������-->�������� ++ 
    void increment(void)
    {
        unique_lock<mutex> l(m);

        count++;

        if (count >= consume_count)
        {
            cout << "�������� " << endl;
            
            cv.notify_all();	//����
        }
    }

    //������:�����������-->�������� ��0 
    void consume(void)
    {
        unique_lock<mutex> l(m);

        if (count < consume_count)
        {
            cv.wait(l);	//�ȴ�
        }

        if (count >= consume_count)
        {
            count = 0;	//��������

            cout << "������(��0) " << endl;
        }
    }
};

//�������߳�
void worker(DataPool* p)
{
    while (1)
    {
        p->increment();
    }
}

//�������߳� 
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