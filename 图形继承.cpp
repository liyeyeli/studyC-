#include<iostream>

using namespace std;

class pic
{
public:
	pic(double lenth, double width):lenth(lenth),width(width)
	{
		cout << "���û��ຯ��" << endl;
	}
protected:
	double lenth;
	double width;
};

class juxing : public pic
{
public:
	juxing(double lenth, double width) :pic(lenth, width){}
	double area()
	{
		cout << "�������������������" << endl;
		double ar = lenth * width;
		return ar;
	}
};

int main()
{
	juxing a(10,10);
	cout << a.area() << endl;

	system("pause");
	return 0;
}