
#include <iostream>
using namespace std;

template<typename T, int n>		//带"非类型"的模板参数
class Array
{
private: 
    T * arr;
    int size;
    
public: 
    //构造函数 
    Array() : arr(nullptr), size(n)
    {
        if( size > 0 )
        {
            arr = new T[size];
        }
    }

    //拷贝构造函数 
    Array( const Array& a ): arr(nullptr), size(a.size)
    {
    	if( size > 0 )
    	{
			//先分配空间 
			arr = new T[size];

			//再 拷贝 
			int i;
			for( i=0; i<size; i++ )
			{
				(*this)[i] = a[i];
			}
    	}
    }

    //析构函数 
    ~Array()
    {
		if( arr )
		{
			delete [] arr;
		}
    }

    // []下标运算符重载 
	T& operator[]( const int& i )
	{
		if( i>=0 && i<size )
		{
			return arr[i];
		}
	}

	const T& operator[]( const int& i ) const
	{
		if( i>=0 && i<size )
		{
			return arr[i];
		}
	}


	// << 输出运算符重载 
	template<typename T1, int n1>
	friend ostream& operator<<( ostream& o, const Array<T1,n1>& a );

};

// << 输出运算符重载 
template<typename T, int n>
ostream& operator<<( ostream& o, const Array<T,n>& a )
{
    int i;
    for( i=0; i<n; i++ )
    {
        o << a[i] << "  ";
    }
    o << endl;

    return o;
}


int main()
{
    Array<int , 5> a;       // int a[5];
    Array<double, 6> b;     //double b[6];

    a[0] = 1;
    a[1] = 3;
    a[2] = 5;
    a[3] = 7;
    a[4] = 9;

    b[0] = 2.1;
    b[1] = 1.9;
    b[2] = 3.4;

    cout << a << endl;
    cout << b << endl;

}


