#include<iostream>
using namespace std;

//this指针是隐含在每一个非静态成员函数内的一种指针
//this指针不需要定义，直接使用即可

//this指针用途
class person
{
	
public:
	person(int age)
	{
		//this指针指向 被调用的成员函数 所属的对象
		this->age = age;
	}
	person& personaddage(person p)
	{
		this->age += p.age;
		return *this;
	}
	int age;
};

//1、解决名称冲突
void test01()
{
	person p1(18);
	
	cout << "p1的年龄为：" << p1.age << endl;
}
//2、返回的对象本身用*this
void test02()
{
	person p1(10);
	person p2(10);

	//链式编程思想
	p2.personaddage(p1).personaddage(p1).personaddage(p1);
	cout << "p2的年龄为：" << p2.age << endl;
}

int main()
{
	//test01();
	test02();
	return 0;

}