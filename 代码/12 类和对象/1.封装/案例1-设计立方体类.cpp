#include<iostream>
using namespace std;

//要求：设计立方体类
//求出立方体的面积和体积
//分别用全局函数和成员函数判断两个立方体是否相等

//立方体类
class Cube
{
public:
	//属性
	int L;
	int W;
	int H;

	//方法
	double calculateS()
	{
		return 2 * (L * W + L * H + W * H);
	}
	double calculateV()
	{
		return L * W * H;
	}
	//判断两个立方体是否相等
	bool issamec(Cube &c)
	{
		if (L == c.L && W == c.W && H && c.H)
		{
			return true;
		}
		else {
			return false;
		}
	}
};

//全局函数
bool issame(Cube c1, Cube c2)
{
	if (c1.L == c2.L && c1.W == c2.W && c1.H && c2.H)
	{
		return true;
	}
	else {
		return false;
	}
}

int main()
{
	Cube c1;
	Cube c2;
	c1.H = 9;
	c1.L = 56;
	c1.W = 4;
	cout << "c1的面积:" << c1.calculateS() << endl;
	cout << "c1的体积:" << c1.calculateV() << endl;

	c2.H = 9;
	c2.L = 56;
	c2.W = 4;
	cout << "c2的面积:" << c2.calculateS() << endl;
	cout << "c2的体积:" << c2.calculateV() << endl;

	//全局函数判断结果
	bool ref=issame(c1, c2);
	if (ref == true)
	{
		cout << "c1和c2是相等的立方体" << endl;
	}
	else
	{
		cout << "c1和c2是不相等的立方体" << endl;
	}
	///成员函数判断结果
	bool ref1=c1.issamec(c2);
	if (ref == true)
	{
		cout << "c1和c2是相等的立方体" << endl;
	}
	else
	{
		cout << "c1和c2是不相等的立方体" << endl;
	}


	return 0;
}