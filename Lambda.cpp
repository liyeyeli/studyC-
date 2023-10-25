#include <iostream>
using namespace std;
#include <list>
int main()
{
    list<int> l;
    int d;

    while (1)
    {
        cin >> d;
        if (d == 0)
        {
            break;
        }

        //找位置, 查找第一个比d要小的元素
        auto it = find_if(l.begin(), l.end(), [d](const int& a) {return a < d; });

        //插入 insert 
        l.insert(it, d);
    }

    for (auto& s : l)
    {
        cout << s << " ";
    }
    cout << endl;
}