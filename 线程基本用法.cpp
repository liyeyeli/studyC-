#include <iostream>
#include <thread>
using namespace std;
//
//void test_routine(int& a)
//{
//	int i = 0;
//	while (i < 10)
//	{
//		i++;
//		cout << a++ << endl;
//	}
//}
//int main()
//{
//
//	int b = 100;
//	thread t1(test_routine,ref(b));
//	t1.join();
//	cout << b << endl;
//
//	return 0;
//}

//class A
//{
//private:
//    int a;
//public:
//    A(const int& _a = 0) : a(_a)
//    {}
//
//    void display(const int& times)
//    {
//        for (int i = 0; i < times; i++)
//        {
//            cout << a++ << endl;
//        }
//    }
//
//    int get_a() const
//    {
//        return a;
//    }
//};
//
//int main()
//{
//    A a1(666);
//
//    thread t( &A::display, a1, 5 );			//��ֵ 
//    //thread t( &A::display, &a1, 5 );			//��ַ
//    //thread t(&A::display, std::ref(a1), 5);	//����
//
//    t.join();
//
//    cout << "a = " << a1.get_a() << endl;
//
//}

    //ȫ�ֺ��� 
//void test_routine(int& a)
//{
//    int i = 0;
//    while (i++ < 10)
//    {
//        cout << a++ << endl;
//    }
//}
//
//class A
//{
//private:
//    int aaa;
//public:
//    A(const int& _a = 0) :aaa(_a)
//    {}
//
//    static void print_a(int& a)  //static��̬��Ա���� 
//    {
//        int i;
//        for (i = 0; i < 5; i++)
//        {
//            cout << a++ << endl;
//        }
//    }
//
//    void display(int& a)		//��ķ�static��Ա����
//    {
//        for (int i = 0; i < 8; i++)
//        {
//            cout << a++ << endl;
//        }
//    }
//};
//
//
//int main()
//{
//    int b = 100;
//
//    //1.����һ��ָ��,ָ��ȫ�ֺ��� 
//        //void (*p1)(int &);
//        //p1 = test_routine;
//        //thread t( p1, std::ref(b) );
//
//    //2.����һ��ָ��,ָ�����static��̬��Ա����
//        //void (*p2)(int &);
//        //p2 = A::print_a;
//        //thread t( p2, std::ref(b) );
//
//    //3.����һ��ָ��,ָ�����ķ�static��Ա����
//    void (A:: * p3)(int &);
//    p3 = &A::display;
//    A a1(360);
//    thread t(p3, std::ref(a1), std::ref(b));
//
//
//    t.join();
//    cout << "b = " << b << endl;	//100 �β���ʵ
//
//    //ͨ��ָ��p3 ȥ���õ���ķ�static��Ա���� 
//    int i = 6;
//    a1.print_a(i);
//    cout << endl << "-----------------" << endl;
//
//    (a1.*p3)(i);
//    cout << endl << "-----------------" << endl;
//
//    (&a1->*p3)(i);
//}

//class Foo
//{
//public:
//    //�������������()����
//    void operator()(int& a)
//    {
//        for (int i = 0; i < 5; i++)
//        {
//            cout << a++ << endl;
//        }
//    }
//};
//
//int main()
//{
//    int b = 250;
//
//    Foo  f;     //f����һ���������� 
//    //f(b);	
//
//    thread t(f, std::ref(b));
//
//    t.join();
//
//    cout << "b = " << b << endl;
//}

