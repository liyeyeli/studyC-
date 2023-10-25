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
//    thread t( &A::display, a1, 5 );			//传值 
//    //thread t( &A::display, &a1, 5 );			//地址
//    //thread t(&A::display, std::ref(a1), 5);	//引用
//
//    t.join();
//
//    cout << "a = " << a1.get_a() << endl;
//
//}

    //全局函数 
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
//    static void print_a(int& a)  //static静态成员函数 
//    {
//        int i;
//        for (i = 0; i < 5; i++)
//        {
//            cout << a++ << endl;
//        }
//    }
//
//    void display(int& a)		//类的非static成员函数
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
//    //1.定义一个指针,指向全局函数 
//        //void (*p1)(int &);
//        //p1 = test_routine;
//        //thread t( p1, std::ref(b) );
//
//    //2.定义一个指针,指向类的static静态成员函数
//        //void (*p2)(int &);
//        //p2 = A::print_a;
//        //thread t( p2, std::ref(b) );
//
//    //3.定义一个指针,指向的类的非static成员函数
//    void (A:: * p3)(int &);
//    p3 = &A::display;
//    A a1(360);
//    thread t(p3, std::ref(a1), std::ref(b));
//
//
//    t.join();
//    cout << "b = " << b << endl;	//100 形不改实
//
//    //通过指针p3 去调用的类的非static成员函数 
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
//    //函数调用运算符()重载
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
//    Foo  f;     //f就是一个函数对象 
//    //f(b);	
//
//    thread t(f, std::ref(b));
//
//    t.join();
//
//    cout << "b = " << b << endl;
//}

