#include<iostream>
using namespace std;

//Ҫ�������������
//������������������
//�ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ����

//��������
class Cube
{
public:
	//����
	int L;
	int W;
	int H;

	//����
	double calculateS()
	{
		return 2 * (L * W + L * H + W * H);
	}
	double calculateV()
	{
		return L * W * H;
	}
	//�ж������������Ƿ����
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

//ȫ�ֺ���
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
	cout << "c1�����:" << c1.calculateS() << endl;
	cout << "c1�����:" << c1.calculateV() << endl;

	c2.H = 9;
	c2.L = 56;
	c2.W = 4;
	cout << "c2�����:" << c2.calculateS() << endl;
	cout << "c2�����:" << c2.calculateV() << endl;

	//ȫ�ֺ����жϽ��
	bool ref=issame(c1, c2);
	if (ref == true)
	{
		cout << "c1��c2����ȵ�������" << endl;
	}
	else
	{
		cout << "c1��c2�ǲ���ȵ�������" << endl;
	}
	///��Ա�����жϽ��
	bool ref1=c1.issamec(c2);
	if (ref == true)
	{
		cout << "c1��c2����ȵ�������" << endl;
	}
	else
	{
		cout << "c1��c2�ǲ���ȵ�������" << endl;
	}


	return 0;
}