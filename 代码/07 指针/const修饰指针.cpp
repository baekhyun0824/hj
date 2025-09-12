#include<iostream>
using namespace std;

int main()
{

	int a = 10;
	int b = 20;
	//常量指针
	//修饰的是指针，指针指向可以改，指针指向的值不可以更改
	const int *p1 = &a;
	p1 = &b;
	//*p1 = 100;

	//指针常量
	//修饰的是常量，指针指向不可以改，指针指向的值可以更改
	int * const p2 = &a;
	*p2 = 100;
	//p2 = &b;

	//const修饰指针又修饰常量
	const int * const p3 = &a;
	//p3=&b;
	//*p=100;

	system("pause");
	return 0;

}