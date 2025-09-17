#include<iostream>
using namespace std;

//堆区的数据由程序员分配释放

int * func()//形参数据也会放在栈区
{
	//利用new关键字  可以将数据开辟到堆区
	//指针本质也是一个局部变量，放在栈上，指针保存的数据是放在堆区
	int *a = new int(10);
	return a;
}
int main()
{
	//接受func的返回值
	int *p = func();

	cout << *p << endl;//第一次可以打印正确的数字，是因为编译器做了保留
	cout << *p << endl;//第二次这个数据就不在保留了
	  
	//delete释放堆区数据	
	delete p;
	//cout << *p << endl;//报错，释放的空间不可访问
	return 0;
}