#include<iostream>
using namespace std;

//在设计类时，属性和行为写在一起，表现事物

//设计一个圆类，求圆的周长
//圆周率
const double pi = 3.14;

//class 代表设计一个类，类后面紧跟着的就是类名称
class Circle
{
	//访问权限
	//公共权限
public:
	
	//属性
	//半径
	int m_r;
	
	//行为
	//获取圆的周长
	double calculateZC()
	{
		return 2 * pi*m_r;
	}
};

int main()
{
	//通过圆类 创建具体的圆（对象）
	Circle c1;
	//给圆对象的属性进行赋值
	c1.m_r = 10;

	cout << "圆的周长为：" << c1.calculateZC() << endl;

	return 0;
}