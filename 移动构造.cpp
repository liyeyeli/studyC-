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
//    //��ͨ�� ���캯�� 
//    DataBuffer(int maxl = 0) : max_len(maxl)
//    {
//        cout << "��ͨ�� ���캯�� DataBuffer( int maxl = 0 )" << endl;
//        if (max_len > 0)
//        {
//            pBuf = (char*)malloc(max_len);
//        }
//    }
//    //�ƶ���������
//    DataBuffer(DataBuffer&& r) :max_len(r.max_len)
//    {
//        cout << "�ƶ����캯�� DataBuffer( DataBuffer && r ) " << endl;
//        this->pBuf = r.pBuf;
//        r.pBuf = nullptr;
//    }
//    ~DataBuffer()
//    {
//        if (pBuf)
//        {
//            free(pBuf);
//            cout << "�������� ~DataBuffer()" << endl;
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
//    char* pBuf;     //ָ��һ��ռ�
//    int max_len;    //pBufָ��Ŀռ�Ĵ�С
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