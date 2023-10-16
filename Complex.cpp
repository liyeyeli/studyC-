
#include "Complex.h"
#include <iostream>

using namespace std;


//构造函数 
Complex::Complex( const double& _r, const double& _i ) : real(_r), imag(_i)
{
}

// + 运算符重载  this + y
Complex Complex::operator+( const Complex& y ) const
{
	Complex s;

	s.real = this->real + y.real;
	s.imag = this->imag + y.imag;
	
	return s;
}

// - 运算符重载 this - y 
Complex Complex::operator-( const Complex& y ) const
{
	Complex s;

	s.real = this->real - y.real;
	s.imag = this->imag - y.imag;
	
	return s;
}


//打印
void Complex::print() const
{
	cout << real << " ";

	if( imag > 0 ) 
	{
		cout << "+ " << imag << "i" << endl;
	}
	else if( imag < 0 )
	{
		cout << imag << "i" << endl;
	}
}


//全局函数 

// << 输出运算符重载
ostream& operator<<( ostream& o, const Complex& c )
{
	o << c.real << " ";

	if( c.imag > 0 )
	{
		o << "+ " << c.imag << "i" ;
	}
	else if( c.imag < 0 )
	{
		o << c.imag << "i" ;
	}
	return o;
}
// >> 输入运算符重载
ostream& operator>>(ostream& o, const Complex& c)
{
	o >> c.real;

	if (c.imag > 0)
	{
		o >> '+' >> c.imag >> 'i';
	}
	else if (c.imag < 0)
	{
		o >> c.imag >> 'i';
	}
	return o;
}






