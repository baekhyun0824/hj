#include<iostream>
using namespace std;


//提前告诉编译器函数的存在
//声明可以很多次，函数的定义只有一次
//int max(int a, int b);
//
//int max(int a,int b)
//{
//	return a > b ? a : b;
//}

#include"swap.h"

int main()
{
	int a = 100;
	int b = 200;

	swap(a, b);

	//cout << max(a, b) << endl;

	system("pause");
	return 0;

}