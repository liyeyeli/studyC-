
#include <iostream>
using namespace std;

template<typename T>
class Array 	//数组类 
{
private:
    T arr[100];     //存放数组元素
public:

    // [] 下标运算符重载 
    T& operator[]( const int& i )	
    {
        if( i>=0 && i<100 )
        {
            return arr[i];
        }
    }

    const T& operator[]( const int& i ) const
    {
        if( i>=0 && i<100 )
        {
            return arr[i];
        }
    }

    //友元声明
    // <<输出运算符重载
    template<typename U>
    friend ostream& operator<<( ostream& o, const Array<U>& a );

};

// <<输出运算符重载
template<typename T>
ostream& operator<<( ostream& o, const Array<T>& a )
{
    int i;
    for( i=0; i<100; i++ )
    {
        o << a[i] << "  ";
    }
    o << endl;

    return o;
}

int main()
{
    Array<int> a;
    Array<double> b;

    a[0] = 1;
    b[0] = 2.5;

    cout << a << endl;
    cout << b << endl;
}


