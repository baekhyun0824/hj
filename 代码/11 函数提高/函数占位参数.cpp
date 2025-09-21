#include<iostream>
using namespace std;

//函数占位参数
//返回值类型  函数名  （数据类型）{}

//如果我们自己传入数据，就用自己的数据，如果没有，那么用默认值
int func(int a, int )
{
	cout << "this is func" << endl;
}

int main()
{
	func(10, 10);

	return 0;
}