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

        //��λ��, ���ҵ�һ����dҪС��Ԫ��
        auto it = find_if(l.begin(), l.end(), [d](const int& a) {return a < d; });

        //���� insert 
        l.insert(it, d);
    }

    for (auto& s : l)
    {
        cout << s << " ";
    }
    cout << endl;
}