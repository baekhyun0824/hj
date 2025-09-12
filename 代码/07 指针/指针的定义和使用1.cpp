#include<iostream>
using namespace std;

int main()
{

	//定义指针
	int a = 10;
	//指针的定义语法：数据类型 *指针变量名；
	//int * p;
	//p = &a;//指针变量赋值
	int * p = &a;//int *为一个数字类型，所以等价于上两句

	cout << "a的值为：" << &a << endl;
	cout << "指针p为：" << p << endl;
	//2.使用指针
	//可以通过*操作指针变量指向的内存空间
	*p = 1000;
	cout << *p << endl;
	cout << a << endl;

	//3.指针所占用的内存空间
	cout << "sizof(int *)=" << sizeof(p) << endl;
	cout << "sizof(int *)=" << sizeof(int *) << endl;
	cout << "sizof(int *)=" << sizeof(char *) << endl;
	cout << "sizof(int *)=" << sizeof(float *) << endl;
	cout << "sizof(int *)=" << sizeof(double *) << endl;
	//在32位操作系统下，指针是占4个字节空间大小，不管什么数据类型
	//在64位操作系统下，指针是占8个字节空间大小

	system("pause");
	return 0;

}