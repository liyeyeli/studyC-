
#include <iostream>
using namespace std;


class A 
{
public: 
	//虚函数带默认参数 
    virtual void print( int a=250 )
    {
        cout << "a = " << a << endl;
    }
};

class B : public A 
{
public:
    void print( int b=360 )
    {
        cout << "b = " << b << endl;
    }
};

void display( A* p )
{
    //p->print();		// b = 250  
    p->print( 666 );	// b = 666 
    					// 函数调用 分为2步 
    					// 1.准备好参数, 有参数666 就给参数, 没有参数调用虚函数默认的参数
    					// 2.跳转到实际的函数中执行, "被调用的函数的地址填到此处" p->vptr->print 
}

int main()
{
    B t;

    display( &t );
}


