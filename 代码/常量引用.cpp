#include<iostream>
using namespace std;

//打印数据函数
void show(const int &val)
{
	//val = 1000;
	cout << "val=" << val << endl;
}


int main()
{
	//常量引用 用来修饰形参，防止误操作
	
	//int &ref = 10;//必须引用一块合法的内存空间
	//加上const之后 编译器将代码修改  int temp=10；const  int& ref = temp;
	const int & ref = 10;
	//ref = 10;//加入const之后变为只读，不可以修改
	
	int a = 10;
	show(a);

	return 0;
}