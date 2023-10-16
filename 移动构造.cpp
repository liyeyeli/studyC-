//#include<iostream>
//#include<string>
//using namespace std;
//extern "C"
//{
//    #include<string.h>
//}
//
//class DataBuffer
//{
//public:
//    //普通的 构造函数 
//    DataBuffer(int maxl = 0) : max_len(maxl)
//    {
//        cout << "普通的 构造函数 DataBuffer( int maxl = 0 )" << endl;
//        if (max_len > 0)
//        {
//            pBuf = (char*)malloc(max_len);
//        }
//    }
//    //移动拷贝构造
//    DataBuffer(DataBuffer&& r) :max_len(r.max_len)
//    {
//        cout << "移动构造函数 DataBuffer( DataBuffer && r ) " << endl;
//        this->pBuf = r.pBuf;
//        r.pBuf = nullptr;
//    }
//    ~DataBuffer()
//    {
//        if (pBuf)
//        {
//            free(pBuf);
//            cout << "析构函数 ~DataBuffer()" << endl;
//        }
//    }
//
//    void MemCopy(const char* p, int n)
//    {
//        if (pBuf && n <= max_len)
//        {
//            memcpy(pBuf, p, n);
//        }
//    }
//    void print(void) const
//    {
//        cout << pBuf << endl;
//    }
//
//private:
//    char* pBuf;     //指向一块空间
//    int max_len;    //pBuf指向的空间的大小
//};
//DataBuffer get_datapbuf()
//{
//    DataBuffer d(128);
//    d.MemCopy("hello world", 12);
//
//    return d;
//}
//int main()
//{
//    DataBuffer dx = get_datapbuf();
//    dx.print();
//
//   // system("pause");
//    return 0;
//}