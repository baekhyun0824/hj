#include<iostream>
using namespace std;

//Ҫ�����һ��Բ���࣬��һ�����࣬������Բ�Ĺ�ϵ
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
	//����֮������ƽ��
	int distance = (c.center.x - p.x)*(c.center.x - p.x) + (c.center.y - p.y)*(c.center.y - p.y);
	//�뾶��ƽ��
	int r2 = c.R*c.R;
	//�ж�
	if (distance == r2)
	{
		cout << "����Բ��" << endl;
	}
	else if (distance > r2)
	{
		cout << "����Բ��" << endl;
	}
	else
	{
		cout << "����Բ��" << endl;
	}
}

int main()
{
	//����Բ
	circle c;
	c.R = 10;
	c.center.x = 10;
	c.center.y = 0;

	//������
	point p;
	p.x = 10;
	p.y = 5;

	isincircle(c, p);

	return 0;
}