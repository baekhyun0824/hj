#include<iostream>
using namespace std;

//构造函数分类
//按参数分：有参构造和无参构造（默认）
//按类型分：普通构造和拷贝构造
//调用方式
//括号法
//显示法
//隐式转换法
class person
{
public:
	//构造函数 初始化
	person() 
	{
		cout << "person的无参构造函数调用" << endl;
	}
	person(int a)
	{
		age = a;
		cout << "person的有参构造函数调用" << endl;
	}
	//拷贝构造函数
	person(const person &p)
	{
		age = p.age;
		cout << "person的拷贝构造函数调用" << endl;
	}
	int age;
};

void test01()
{
	//括号法
	/*person p1;
	person p2(23);
	person p3(p2);

	cout << "p2的年龄为：" << p2.age << endl;
	cout << "p3的年龄为：" << p3.age << endl;*/
	//显示法
	person p1;
	person p2 = person(23);
	person p3 = person(p2);

	person(23);//匿名对象 特点：当前执行结束后，系统会立即回收掉匿名对象
	//隐式转换法
	person p4 = 10;//相当于写了person p4=person（10）；
	person p5 = p4;
	cout << "p4的年龄为：" << p4.age << endl;
}

int main()
{
	test01();
	return 0;
}
