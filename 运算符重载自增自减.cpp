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
//	//ǰ��++
//	T& operator++()
//	{
//		this->a = this->a + 1;
//		return *this;
//	}
//	//����++
//	T operator++(int)
//	{
//		T t(*this);
//		this->a = this->a + 1;
//
//		return t;
//	}
//	//ǰ��--
//	T& operator--()
//	{
//		this->a = this->a - 1;
//		return *this;
//	}
//	//����--
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