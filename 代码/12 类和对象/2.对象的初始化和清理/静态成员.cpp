#include<iostream>
using namespace std;

////静态成员变量
//class person
//{
//public:
//	//所有对象都共享同一份数据
//	//编译阶段就分配内存
//	//类内声明，类外初始化操作
//	static int A;
//
//	//静态成员变量也是有访问权限的
//private:
//	static int B;
//
//};
//int person::A = 100;
//int person::B = 200;
////void test01()
////{
////	person p;
////	cout << p.A << endl;
////	person p2;
////	p2.A = 200;
////	cout << p2.A << endl;
////}
//void test02()
//{
//	//静态成员变量 不属于某个对象上，所有对象都共享同一份数据
//	//因此静态成员变量有两种访问方式
//	//1、通过对象进行访问
//	//person p;
//	//cout << p.A << endl;
//	//2、通过类名进行访问
//	cout << person::A << endl;
//	////cout << person::B << endl;//类外访问不到私有静态成员变量
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}

//静态成员函数
//所有对象共享同一个函数
//静态成员函数只能访问静态成员变量
class person
{
public :
	static void func()
	{
		A = 100;
		//B = 200;//非静态成员变量不可以访问
		cout << "static void func调用" << endl;
	}
	static int A;
	int B;
};
int person::A = 0;
void test01()
{
	//1、通过对象访问
	person p;
	p.func();

	//2、通过类名访问
	person::func();
}
int main()
{
	test01();
	return 0;
}