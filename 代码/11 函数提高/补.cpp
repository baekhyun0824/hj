#include<iostream>
using namespace std;

int func(int a, int b)
{
	cout << "this is func" << endl;
	return a + b;
}
void out(int(*fun)(int a, int b), int x, int y) //int(*fun)(int a, int b)Ϊ����ָ��
{
	fun(x, y);
}
int main()
{
	int d = func(1, 2);
	cout << d << endl;//������Ϊ����ֵ3

	out(func, 1, 2);//������Ϊ this is func

	return 0;
}