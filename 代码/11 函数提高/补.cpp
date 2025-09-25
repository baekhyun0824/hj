#include<iostream>
using namespace std;

int func(int a, int b)
{
	cout << "this is func" << endl;
	return a + b;
}
void out(int(*fun)(int a, int b), int x, int y) //int(*fun)(int a, int b)为函数指针
{
	fun(x, y);
}
int main()
{
	int d = func(1, 2);
	cout << d << endl;//输出结果为返回值3

	out(func, 1, 2);//输出结果为 this is func

	return 0;
}