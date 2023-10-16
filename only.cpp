#include<iostream>
#include<sys/mman.h>
using namespace std;

extern "C"
{
#include<stdio.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<fcntl.h>
#include<unistd.h>
#include<linux/input.h>
}
class Screen
{
private:
	static Screen* only_one;    //指向类的唯一实例
private:
	Screen()
	{
		cout << "普通的构造函数" << endl;
		fd = open("/dev/fb0", O_RDWR);//打开lcd屏
		if (fd == -1)
		{
			cerr << "lcdopen fail!" << endl;
		}
		lcd_p = (unsigned int*)mmap(NULL, 800 * 480 * 4, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);
	}
	//拷贝构造函数 
	Screen(const Screen&) = delete;      //弃置 ,不需要拷贝构造函数 

	~Screen()
	{
		close(fd);
		munmap(lcd_p, 800 * 480 * 4);
	}
public:
	//全局访问点 --> 获取该类的唯一的实例
	static Screen* get_onlyone(void)
	{
		if (only_one == nullptr)
		{
			only_one = new Screen;
		}
		return only_one;
	}

	//销毁
	static void destroy_onlyone(void)
	{
		if (only_one)
		{
			delete only_one;
			only_one = nullptr;
		}
	}

	void print_self(void) const
	{
		cout << this << endl;
	}


	//画矩形接口
	void draw_juxing(int color, int w, int h)
	{
		for (int y = 0; y < h; y++)
		{
			for (int x = 0; x < w; x++)
			{
				*(lcd_p + x + y * 800) = color;
			}
		}
	}
private:
	int fd;//文件描述符
	unsigned int* lcd_p;
};
//初始化 
Screen* Screen::only_one = nullptr;    //指向类A的唯一实例

int main()
{
	Screen* t1 = Screen::get_onlyone();

	Screen* t2 = Screen::get_onlyone();

	Screen* t3 = Screen::get_onlyone();

	t1->print_self();
	t2->print_self();
	t3->print_self();

	t1->destroy_onlyone();
	t2->destroy_onlyone();
	t3->destroy_onlyone();
}