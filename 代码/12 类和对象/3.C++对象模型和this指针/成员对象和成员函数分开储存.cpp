#include<iostream>
using namespace std;

//成员变量和成员函数是分开存储的

class person
{
	int a;//非静态成员变量 属于类的对象上

	static int b;//静态成员变量 不属于类对象上

	void func(){}//非静态成员函数 不属于类对象上

	static void func2(){}//静态成员函数 不属于类对象上
	
};
int person::b = 0;

void test01()
{
	person p;
	//C++编译器会给每个空对象也分配一个字节空间，是为了区分空对象占内存的位置
	//每个空对象也应该有一个独一无二的内存地址
	cout << "sizeof p=" << sizeof(p) << endl;
}
void test02()
{
	person p;
	cout << "sizeof p=" << sizeof(p) << endl;
}

int main()
{
	test01();
	test02();
	return 0;

}