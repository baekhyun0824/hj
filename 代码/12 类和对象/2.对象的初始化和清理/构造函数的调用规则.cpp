#include<iostream>
using namespace std;

//默认情况下，C++编译器至少给一个类添加3个函数
//1、默认构造函数
//2、默认析构函数
//3、默认拷贝构造函数，对属性进行值拷贝

//构造函数调用规则：
//1、如果用户定义有参构造函数，C++不在提供默认无参构造，但是会提供默认拷贝构造
//2、如果用户定义拷贝构造函数，C++不会在提供其他构造函数

class person
{
public:
	person()
	{
		cout << "person的默认构造函数调用" << endl;
	}
	person(int age)
	{
		cout << "person的有参构造函数调用" << endl;
	}
	person(const person & p)
	{
		age = p.age;
		cout << "person的拷贝构造函数调用" << endl;
	}
	~person()
	{
		cout << "person的析构函数调用" << endl;
	}
	int age;

};
void test01()
{
	person p;
	p.age = 18;

	person p2(p);
	cout << "p2的年龄为：" << p2.age << endl;
}

int main()
{
	test01();
	return 0;
}