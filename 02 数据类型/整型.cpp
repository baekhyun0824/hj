#include<iostream>
using namespace std;

//宏常量
#define day 7

int main() {
	
	//单行注释
	/* 多行注释 */
	cout << "一周里总共有" << day << "天" << endl;
	//修饰变量 const
	const int month = 12;
	cout << "一年里总共有" << month << "个月份" << endl;
	//整型
	  //短整型
	short num1 = 32768;

	  //整型
	int num2 = 10;

	  //长整型
	long num3 = 10;

	  //长长整型
	long long num4 = 10;

	cout << "short 类型所占内存空间为：" << sizeof(short) << endl;

	cout << "int 类型所占内存空间为：" << sizeof(int) << endl;

	cout << "long 类型所占内存空间为：" << sizeof(long) << endl;

	cout << "long long 类型所占内存空间为：" << sizeof(long long) << endl;

	system("pause");

	return 0;
}
