#include<iostream>
using namespace std;

//值传递
void swap01(int a, int b)
{
	int temp = a;//temp=a=10
	a = b;//a=20
	b = temp;//b=10
}
//地址传递
void swap02(int *p1, int *p2)
{
	int temp = *p1;//temp指向p1 所在地址的数据，即a的值
	*p1 = *p2;//p1所在地址的值与p2所在地址的值互换，即a=20
	*p2 = temp;//p2所在地址的值变为原a的值
}

void swap03(int *p1, int *p2)
{
	int * temp = p1;//temp指向p1所在地址
	p1 = p2;//p1所在地址与p2所在地址互换
	p2 = temp;
}

int main()
{

	int a = 10;
	int b = 20;
	swap01(a, b);//结果a,b值不变
	swap02(&a, &b);//结果a,b值互换
	swap03(&a, &b);//结果a,b值不变

	cout << "a =" << a << endl;
	cout << "b =" << b << endl;

	return 0;

}