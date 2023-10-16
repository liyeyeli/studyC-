//#include<iostream>
//using namespace std;
//
//class A
//{
//public:
//	A(int a):a(a)
//	{
//		cout << "调用基类构造函数" << endl;
//	}
//	int get_A()
//	{
//		cout << a << endl;
//		return a;
//	}
//	~A()
//	{
//		cout << "调用基类析构函数" << endl;
//	}
//private:
//	int a;
//};
//class B:public A
//{
//public:
//	/*B():A(10)
//	{
//		cout << "调用派生类构造函数" << endl;
//	}*/
//	B():b(5),A(20)
//	{
//		cout << "调用派生类构造函数" << endl;
//		cout << b << endl;
//	}
//	~B()
//	{
//		cout << "调用派生类析构函数" << endl;
//	}
//private:
//	int b;
//
//};
//int main()
//{
//	B b;
//	b.get_A();
//
//	return 0;
//}