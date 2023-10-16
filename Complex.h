
#ifndef __COMPLEX_H__
#define __COMPLEX_H__

#include <iostream>
using namespace std;


// 复数 a+bi
class Complex
{
private:
    double real;    //实部    
    double imag;    //虚部
public : 
    //构造函数 
    Complex( const double& _r=0, const double& _i=0);

	~Complex()
	{}

    // + 运算符重载 
    Complex operator+( const Complex& y ) const;

    // - 运算符重载 
    Complex operator-( const Complex& y ) const;

    //打印
    void print() const;


    //友元函数 
    friend ostream& operator<<( ostream& o, const Complex& c );
    friend ostream& operator>>(ostream& o, const Complex& c);
};


#endif



