#include <iostream>
using namespace std;

class String
{
public:
	String(char* d) :data(data)
	{
		cout << "普通构造函数" << endl;
		data = nullptr;
		size = 0;
	}
	String(const String& s)
	{
		cout << "拷贝构造函数“深拷贝”" << endl;
		size = s.size;
		data = new char[size+1];
		memset(data, 0,size);
		memcpy(data, s.data, size);
	}
	~String()
	{
		cout << "析构函数" << endl;
		if (data != NULL)
		{
			delete[] data;
			data = NULL;
		}
	}
	String& operator=(String s)
	{
		cout << "赋值运算符重载" << endl;
		if (data!= NULL)
		{
			delete[] data;
			data = NULL;
		}

		size = s.size;
		data = new char[size + 1];
		memset(data, 0, size + 1);
		memcpy(data, s.data, size);

		return *this;
	}
	int get_size(String s)
	{
		cout << "求字符串长度" << endl;
		return s.size;
	}
	bool is_empty(String s)
	{
		cout << "判断字符串是否为空" << endl;
		return s.size;
	}
	friend ostream& operator<<(ostream& o, const String& s);
	friend iostream& operator>>(iostream& in, const String& s);
	char& operator[](int pos);
	String& operator+=(const String& c);
private:
	char* data;
	int size;
};
ostream& operator<<(ostream& o, const String& s)
{
	o << s.data << endl;
	return o;
}
iostream& operator>>(iostream& in, const String& s)
{
	for (int i = 0; i <= s.size; i++)
	{
		in >> s.data[i];
	}
	return in;
}
char& String::operator[](int pos)
{
	cout << "下标运算符重载" << endl;
	if (pos < 0 || pos >= size)
	{
		cout << "下标越界" << endl;
		exit(-1);
	}

	return data[pos];
}
String& String::operator+=(const String& s)
{
	cout << "+=运算符重载" << endl;
	this->size += s.size;
	strcat(this->data, s.data);
	return *this;
}

