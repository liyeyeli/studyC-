//#define _CRT_SECURE_NO_WARNINGS
//
//#include<iostream>
//using namespace std;
//extern  "C"
//{
//#include<string.h>
//};
//
////实现下列派生类的拷贝构造函数
//class base
//{
//public:
//	base()
//	{
//		this->p = nullptr;
//		size = 0;
//	}
//	base(base& a);
//	base(int size, const char* str = NULL) :size(size)
//	{
//		cout << "调用基类拷贝构造函数" << endl;
//		p = new char[size];
//		strcpy(this->p, str);
//	}
//	~base()
//	{
//		cout << "调用基类析构函数" << endl;
//		cout << &p << endl;
//		delete[]p;
//	}
//	char* get_p()
//	{
//		return p;
//	}
//private:
//	char* p;
//	int size;
//};
//base::base(base& a)
//{
//	p = new char[size];
//	strcpy(this->p, a.p);
//	size = a.size;
//}
//class new_base :public base
//{
//public:
//	new_base() :base() {}
//	new_base(new_base& a) :base(a)
//	{
//		cout << "调用派生类的拷贝构造函数" << endl;
//	}
//	new_base(int size, const char* str = NULL) :base(size, str) {}
//};
////int main()
////{
////	new_base a(1024, "hello");
////	new_base b(a);
////	cout << a.get_p() << endl;
////	cout << b.get_p() << endl;
////
////	return 0;
////}
//
