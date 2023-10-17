

#include <iostream>
using namespace std;

class A 
{
private:
    int a;
public: 
    A()
    {
		init();		//静态绑定 A::init()
    }

    ~A()
    {
		destroy();	//静态绑定 A::destroy()
    }

    virtual void init(void)
    {
    	cout << "A::init() " << endl;
    }

    virtual void destroy(void)
    {
    	cout << "A::destroy() " << endl;
    }
};

class B : public A 
{
private: 
    int b;
public:
    B()
    {
		init();		//静态绑定 B::init()
    }

    ~B()
    {
		destroy();	//静态绑定 B::destroy()
    }

    void init(void)
    {
    	cout << "B::init() " << endl;
    }

    void destroy(void)
    {
    	cout << "B::destroy() " << endl;
    }

};

int main()
{
	B *p = new B;
			//如果 允许在构造函数中进行 动态绑定
			// 那么上面 构造B这个对象的过程中,A里面的init根本不会调用
			// 但是 实际上调用的还是A的init
			// C++规定 在构造函数和析构函数中 所有的动态绑定都会失效
			//         只能进行静态绑定 

	delete p;
}



