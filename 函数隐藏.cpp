#include <iostream>
using namespace std;

class A
{
public:
	void abc()
	{
		cout << " A " << endl;
	}
	void abc(int a)
	{
		cout << " A " << a << endl;
	}
};

class B:public A
{
public:
	
	void abc()
	{
		cout << " B " << endl;
	}
	using A::abc;
};

int main()
{
	B b;
	b.abc();
	b.abc(5);
	//b.A::abc();

	return 0;
}