
#include "Complex.h"
#include <iostream>
using namespace std;

int main()
{

	Complex c1( 3, 5);
	Complex c2( 2, 1);

	Complex s = c1 +c2;
	cin >> s >> endl;
	//s.print();
	cout << s << endl;

	Complex s1 = c2 - c1;
	//s1.print();
	cout << s1 << endl;

}


