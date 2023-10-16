//#include<iostream>
//using namespace std;
//
//class A
//{
//public:
//	friend A operator+(const A& x, const A& y);
//	A(const int& _a) : a(_a)
//	{
//		cout << "调用构造" << endl;
//	}
//	A(const A& _a) :a(_a.a)
//	{
//		cout << "调用拷贝构造" << endl;
//	}
//	A(const A&& _a) :a(_a.a)
//	{
//		cout << "调用移动构造" << endl;
//	}
//	void printf_a()const
//	{
//		cout << "a = " << a << endl;
//	}
//private:
//	int a;
//};
//A operator+(const A& x, const A& y)
//{
//	int _a = x.a + y.a;
//	return A(_a);
//}
//int main()
//{
//	A a1(250);
//	A a2(360);
//
//	A s = a1 + a2;
//	s.printf_a();
//	return 0;
//}