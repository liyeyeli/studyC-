//#include<iostream>
//using namespace std;
//
//class A
//{
//public:
//	A(int a):a(a)
//	{
//		cout << "���û��๹�캯��" << endl;
//	}
//	int get_A()
//	{
//		cout << a << endl;
//		return a;
//	}
//	~A()
//	{
//		cout << "���û�����������" << endl;
//	}
//private:
//	int a;
//};
//class B:public A
//{
//public:
//	/*B():A(10)
//	{
//		cout << "���������๹�캯��" << endl;
//	}*/
//	B():b(5),A(20)
//	{
//		cout << "���������๹�캯��" << endl;
//		cout << b << endl;
//	}
//	~B()
//	{
//		cout << "������������������" << endl;
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