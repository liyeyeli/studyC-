#include <iostream>
using namespace std;

class String
{
public:
	String(char* d) :data(data)
	{
		cout << "��ͨ���캯��" << endl;
		data = nullptr;
		size = 0;
	}
	String(const String& s)
	{
		cout << "�������캯���������" << endl;
		size = s.size;
		data = new char[size+1];
		memset(data, 0,size);
		memcpy(data, s.data, size);
	}
	~String()
	{
		cout << "��������" << endl;
		if (data != NULL)
		{
			delete[] data;
			data = NULL;
		}
	}
	String& operator=(String s)
	{
		cout << "��ֵ���������" << endl;
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
		cout << "���ַ�������" << endl;
		return s.size;
	}
	bool is_empty(String s)
	{
		cout << "�ж��ַ����Ƿ�Ϊ��" << endl;
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
	cout << "�±����������" << endl;
	if (pos < 0 || pos >= size)
	{
		cout << "�±�Խ��" << endl;
		exit(-1);
	}

	return data[pos];
}
String& String::operator+=(const String& s)
{
	cout << "+=���������" << endl;
	this->size += s.size;
	strcat(this->data, s.data);
	return *this;
}

