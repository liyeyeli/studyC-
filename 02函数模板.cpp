
#include <iostream>
using namespace std;

//函数模板

template<typename T>	// template<class T>
T sum( T a, T b )
{
    return a+b;
}

template<class T1, class T2>
T2 sum( T1 a, T2 b)
{
    return a+b;
}

template<class T >
void print_array( T a[], int n )
{
    int i;
    for( i=0; i<n; i++ )
    {
        cout << a[i] << '\t';
    }
    cout << endl; 
}

int main()
{
    cout << sum( 2, 4 ) << endl;

	cout << sum(2.5, 3.4 ) << endl;

	cout << sum( 5 , 3.4 ) << endl;

	int a[5] = {1,2,3,4,5};
	double b[6] = {1.2,3.3, 4.2, 5.5, 6.0 , 8.9};

	print_array( a , 5 );
	print_array( b , 6 );

}


