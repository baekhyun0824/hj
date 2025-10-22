#include<iostream>
#include<string>
using namespace std;

//友元的三种实现
//全局函数做友元
//类做友元
//成员函数做友元

//友元的目的就是让一个函数或者类 访问另一个类中私有成员

class Building
{
	//告诉编译器 goodgay全局函数是Building类的好朋友，可以访问类中的私有内容
	friend void goodgay(Building *building);

public:
	Building()
	{
		this->m_sittingroom = "客厅";
		this->m_Bedroom = "卧室";
	}
	string m_sittingroom;  //客厅
private:
	string m_Bedroom;  //卧室
};

void goodgay(Building *building)
{
	cout << "好基友正在访问：" << building->m_sittingroom << endl;
	cout << "好基友正在访问：" << building->m_Bedroom << endl;
}

void test01()
{
	Building b;
	goodgay(&b);
}

int main()
{
	test01();
	return 0;
}