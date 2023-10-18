
#include <iostream>
using namespace std;

template<typename T, int n>		//带"非类型"的模板参数
class Array
{
private: 
    T * arr;
    int capcity;	//容量: 数组中可容纳的最大的元素个数
    int size;		//数组中实际的元素个数
    
public: 
    //构造函数 
    Array() : arr(nullptr), capcity(n), size(0)
    {
        if( capcity > 0 )
        {
            arr = new T[capcity];
        }
    }

    //拷贝构造函数 
    Array( const Array<T, n>& a ): arr(nullptr), capcity(a.capcity),size(a.size)
    {
    	if( capcity > 0 )
    	{
			//先分配空间 
			arr = new T[capcity];

			//再 拷贝 
			int i;
			for( i=0; i<size; i++ )
			{
				(*this)[i] = a[i];
			}
    	}
    }

    //析构函数 
    ~Array()
    {
		if( arr )
		{
			delete [] arr;
		}
    }

    // []下标运算符重载 
	T& operator[]( const int& i )
	{
		if( i>=0 && i<size )
		{
			return arr[i];
		}
	}

	const T& operator[]( const int& i ) const
	{
		if( i>=0 && i<size )
		{
			return arr[i];
		}
	}

	//往数组的末尾插入一个元素
	bool insert( const T& d )
	{
		if( size >= capcity )
		{
			return false;
		}

		arr[size++] = d;

		return true;
	}

	//返回数组实际的元素个数
	int length(void) const
	{
		return size;
	}


	// << 输出运算符重载 
	template<typename T1, int n1>
	friend ostream& operator<<( ostream& o, const Array<T1,n1>& a );


	//数组Array的 "迭代器的类", 该类的对象 用来遍历Array数组的元素
	class ArrayIterator
	{
	private:
		T * _arr;		//执行"遍历范围"的首元素/首地址
		int _size;		//遍历的范围内的元素个数 
						// 遍历范围 [arr, arr+_size)
		int index;		//指定遍历范围内 当前元素的下标
	public:
		ArrayIterator( T *_start, int _s ) : _arr(_start), _size(_s), index(0)
		{}

		//begin
		void begin(void)
		{
			index = 0;
		}

		//返回当前元素(指向元素)的引用
		T& operator*(void)
		{
			return _arr[index];
		}

		// ++ 
		ArrayIterator& operator++()
		{
			index++;

			
			return *this;
		}

		// is_end 
		bool is_end(void)
		{
			return index == _size;
		}
		
	}; 

	// 用来获取 Array这个类对象的 迭代器
	ArrayIterator get_Iterator(void)
	{
		ArrayIterator it( arr, size );
		return it;
	}

	// 用来获取 Array这个类对象的 迭代器
	ArrayIterator get_Iterator( const int& first, const int& num)
	{
		ArrayIterator it( arr+first, num );
		return it;
	}


};

// << 输出运算符重载 
template<typename T, int n>
ostream& operator<<( ostream& o, const Array<T,n>& a )
{
    int i;
    for( i=0; i<a.length(); i++ )
    {
        o << a[i] << "  ";
    }
    o << endl;

    return o;
}


int main()
{
    Array<int , 10> a;       // int a[5];

    a.insert( 1 );
    a.insert( 3 );
    a.insert( 5 );
    a.insert( 7 );
    a.insert( 9 );
    a.insert( 11 );
    a.insert( 13 );

    cout << a << endl;
	cout << "--------------------" << endl;

    //使用迭代器来遍历 
    Array<int, 10>::ArrayIterator it = a.get_Iterator();

    	//对象it 就是数组a 的迭代器对象
    	// 通过it这个迭代器对象,用来遍历数组a 的元素
    		// ++it  // 让it"指向"写一个元素
    		// *it   // 返回当前元素的引用(it当前指向的那个元素)

    for( it.begin() ; !it.is_end(); ++it )
    {
		cout << *it << "  ";
    }
    cout << endl;

}




