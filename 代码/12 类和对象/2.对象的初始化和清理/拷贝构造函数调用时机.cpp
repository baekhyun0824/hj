#include<iostream>
using namespace std;

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
//拷贝函数的调用时机
//1、使用一个已经创建完毕的对象来初始化一个对象
void test01()
{
	person p1(20);
	person p2(p1);
	cout << "p2的年龄：" << p2.age << endl;
 }
//2、值传递的方式给函数参数传值
void dowork(person p)
{

}
void test02()
{
	person p;
	dowork(p);
}
//3、值方式返回局部对象
person dowork2()
{
	person p1;
	return p1;
}
void test03()
{
	person p = dowork2();
}

int main()
{
	//test01();
	test02();
	return 0;
}