#include<iostream>
using namespace std;

//��������
//1.ֵ����
void swap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}
//2.��ַ����
void swap02(int *p1, int *p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
//3.���ô���
void swap03(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
int main()
{
	
	int a = 10;
	int b = 20;

	//swap01(a, b);//ֵ���ݣ��ββ�������ʵ��
	//swap02(&a, &b);//��ַ���ݣ��βλ�����ʵ��
	swap03(a, b);//���ô��ݣ��βλ�����ʵ��

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;


	return 0;
}