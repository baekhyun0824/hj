#include<iostream>
using namespace std;

//要求：设计一个圆形类，和一个点类，计算点和圆的关系
class point
{
public:
	int x;
	int y;
};
class circle
{
public:
	int R;
	point center;
};

void isincircle(circle c, point p)
{
	//两点之间距离的平方
	int distance = (c.center.x - p.x)*(c.center.x - p.x) + (c.center.y - p.y)*(c.center.y - p.y);
	//半径的平方
	int r2 = c.R*c.R;
	//判断
	if (distance == r2)
	{
		cout << "点在圆上" << endl;
	}
	else if (distance > r2)
	{
		cout << "点在圆外" << endl;
	}
	else
	{
		cout << "点在圆内" << endl;
	}
}

int main()
{
	//创建圆
	circle c;
	c.R = 10;
	c.center.x = 10;
	c.center.y = 0;

	//创建点
	point p;
	p.x = 10;
	p.y = 5;

	isincircle(c, p);

	return 0;
}