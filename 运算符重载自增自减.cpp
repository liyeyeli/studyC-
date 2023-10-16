//#include<iostream>
//using namespace std;
//
//class T
//{
//public:
//	T(int _a=0):a(_a)
//	{}
//	~T(){}
//	void printf_a()const
//	{
//		cout << "a = " << a << endl;
//	}
//	//前置++
//	T& operator++()
//	{
//		this->a = this->a + 1;
//		return *this;
//	}
//	//后置++
//	T operator++(int)
//	{
//		T t(*this);
//		this->a = this->a + 1;
//
//		return t;
//	}
//	//前置--
//	T& operator--()
//	{
//		this->a = this->a - 1;
//		return *this;
//	}
//	//后置--
//	T& operator--(int )
//	{
//		T t(*this);
//		this->a = this->a - 1;
//
//		return t;
//	}
//private:
//	int a;
//};
//
//int main()
//{
//	T t1(250);
//	T t2 = t1++;
//	t2.printf_a();
//	t1.printf_a();
//
//	return 0;
//}