//#include <iostream>
//using namespace std;
//
//template<typename T>
//void Swap(T& a, T& b)
//{
//    T tmp = a;
//    a = b;
//    b = tmp;
//}
//
////ð������ 
//template<typename T, typename Caller>
//void MPsort(T* begin, T* end, Caller less)  //less������һ������ bool (T& a, T& b)
//{
//    T* p = end - 1;
//
//    for (; begin < end; begin++)
//    {
//        for (p = end - 1; p > begin; p--)
//        {
//            //if( *p < *(p-1) )
//            if (less(*p, *(p - 1)))
//            {
//                //����λ��
//                Swap(*p, *(p - 1));
//            }
//        }
//    }
//}
//
//bool pk(const int& a, const int& b)
//{
//    return a < b;
//}
//
//class Less
//{
//public:
//    // () �����������������
//    bool operator()(const int& a, const int& b)
//    {
//        return a < b;
//    }
//};
//
//int main()
//{
//    int a[10] = { 1,3,5,7,9,2,4,6,8,0 };
//    //MPsort( a, a+10 );	// [ , )
//
//    //1.���� 
//    //pk��һ������,pk������Խ�(), ���pk����һ��Callable
//    //MPsort( a, a+10, pk );
//
//    //2.����ָ��
//        //bool (*p)(const int& , const int&);
//        //p = pk;
//        //MPsort( a, a+10, p );	//����ָ��p Ҳ��һ��Callable
//
//    //3.�������� functor "�º���"
//    Less less;	//��������, Ҳ��һ��Callable
//    MPsort(a, a + 10, less);
//
//    //4.lambda���ʽ,Ҳ��һ��Callable
//        //...
//
//    for (auto& s : a)
//    {
//        cout << s << " ";
//    }
//    cout << endl;
//}
