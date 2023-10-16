//#include<iostream>
//using namespace std;
//
//extern "C"
//{
//	#include<sys/types.h>
//	#include<sys/stat.h>
//	#include<fcntl.h>
//}
//int open(const char* pathname = "my.txt", int flags = O_RDWR)
//{
//	return (pathname, flags);
//}
//
//
////int main()
////{
////	int fd;
////	fd = open();
////	if (fd == -1)
////	{
////		perror("open error");
////		return 0;
////	}
////	printf("函数重载open接口成功！");
////	return 0;
////}