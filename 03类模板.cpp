
#include <iostream>
using namespace std;

//类模板
template<typename T>
class Node
{
    T data;
    //...
};

int main()
{
    Node<int> n1;

    Node<double> n2;

    cout << sizeof(n1) << endl;
    cout << sizeof(n2) << endl;

}


