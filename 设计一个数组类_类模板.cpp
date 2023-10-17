#include <iostream>
using namespace std;

template<typename T,int n>
class Array
{
public:
	//构造函数
	Array() :arr(nullptr), size(n)
	{
		if (size > 0)
		{
			arr = new T[size];
		}
	}
	//拷贝构造函数
	Array(const Array& t):arr(nullptr),size(t.size)
	{
		if (t.size > 0)
		{
			arr = new T[size];
			int i;
			for (i = 0; i < size; i++)
			{
				*(this)[i] = t[i];
			}
		}
	}
	//析构函数
	~Array()
	{
		if (arr != nullptr)
		{
			delete []arr;
			arr = nullptr;
		}
	}
	//[]下标运算符重载
	T& operator[](const int& i)
	{
		if (i >= 0 && i < size)
		{
			return arr[i];
		}
	}
	//[]下标运算符重载
	const T& operator[](const int& i)const
	{
		if (i >= 0 && i < size)
		{
			return arr[i];
		}
	}
	
private:
	T * arr;
	int size;

};
template<typename T,int n>
ostream& operator<<(ostream& o, const Array<T, n>& a)
{
	int i;
	for (i = 0; i < n; i++)
	{
		o << a[i] << " ";
	}
	o << endl;
	return o;
}


int main()
{
	Array<int, 5>a;
	Array<double, 6>b;

	a[0] = 1;
	a[1] = 3;
	a[2] = 5;
	a[3] = 7;
	a[4] = 9;

	b[0] = 2.1;
	b[1] = 3.7;
	b[2] = 1.9;

	cout << a << endl;
	cout << b << endl;
	return 0;
}