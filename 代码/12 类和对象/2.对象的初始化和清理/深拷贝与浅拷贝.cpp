#include<iostream>
using namespace std;

//浅拷贝：简单的赋值拷贝操作
//深拷贝：
class person
{
public:
	person()
	{
		cout << "person的默认构造函数调用" << endl;
	}
	person(int age1, int height1 )
	{
		age = age1;
		height = new int(height1);
		cout << "person的有参构造函数调用" << endl;
	}
	person(const person & p)
	{
		cout << "person的拷贝构造函数调用" << endl;
		age = p.age;
		//深拷贝操作
		height = new int(*p.height);
		
	}
	~person()
	{
		//析构函数将堆区开辟的数据做释放处理
		cout << "person的析构函数调用" << endl;
		if (height != NULL)
		{
			delete height;
		}
	}
	//如果不加深拷贝操作的话，执行此次析构函数，第一次执行的时候正常，但由于浅拷贝height的地址是一样的，第二次执行的时候为重复操作
	int age;
	int *height;//存放在堆区

};
void test01()
{
	person p1(18,160);
	cout << "p1的年龄为：" << p1.age << "身高为：" << *p1.height << endl;
	person p2(p1);
	cout << "p2的年龄为：" << p2.age << "身高为：" << *p2.height << endl;
}

int main()
{
	test01();
	return 0;
}