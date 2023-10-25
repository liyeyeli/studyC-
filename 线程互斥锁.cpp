#include <iostream>
#include <thread>
#include <mutex>
using namespace std;
class Test
{
private:
    int data = 0;   //������Դ

    mutex m;	//����������Դ 

public:
    //�̺߳��� 
    void add_data()
    {
        int c = 1000000;

        //p���� ���� 
        m.lock();

        //�ٽ���
        while (c--)
        {
            data++;
        }

        //v���� ����
        m.unlock();

    }

    int get_data() const
    {
        return data;
    }
};

int main()
{
    Test x;     //�����߳�ȥ����ͬһ��������Դ 

    thread t1(&Test::add_data, &x);
    thread t2(&Test::add_data, &x);

    t1.join();
    t2.join();

    cout << "data = " << x.get_data() << endl;
}
