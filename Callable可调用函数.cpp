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
////冒泡排序 
//template<typename T, typename Caller>
//void MPsort(T* begin, T* end, Caller less)  //less类似于一个函数 bool (T& a, T& b)
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
//                //交换位置
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
//    // () 函数调用运算符重载
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
//    //1.函数 
//    //pk是一个函数,pk后面可以接(), 因此pk就是一个Callable
//    //MPsort( a, a+10, pk );
//
//    //2.函数指针
//        //bool (*p)(const int& , const int&);
//        //p = pk;
//        //MPsort( a, a+10, p );	//函数指针p 也是一个Callable
//
//    //3.函数对象 functor "仿函数"
//    Less less;	//函数对象, 也是一个Callable
//    MPsort(a, a + 10, less);
//
//    //4.lambda表达式,也是一个Callable
//        //...
//
//    for (auto& s : a)
//    {
//        cout << s << " ";
//    }
//    cout << endl;
//}
