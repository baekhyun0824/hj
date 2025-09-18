#include<iostream>
using namespace std;

//引用做函数的返回值
//1.不要返回局部变量的引用
int& test01()
{
	int a = 10;
	return a;
}
int& test02()
{
	static int a = 10;//静态变量存放在全局区
	return a;
}

int main()
{
	//int &ref = test01();
	//cout << "ref=" << ref << endl;//第一次结果正确，是因为编译器做了保留
	//cout << "ref=" << ref << endl;//第二次结果错误，a的内存已经释放

	int &ref = test02();
	cout << "ref=" << ref << endl;
	cout << "ref=" << ref << endl;

	test02() = 1000;//如果函数的返回值是引用，这个函数调用可以作为左值
	cout << "ref=" << ref << endl;
	cout << "ref=" << ref << endl;

	return 0;
}