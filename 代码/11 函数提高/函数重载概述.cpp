#include<iostream>
using namespace std;

//�������ظ���
//������������ͬ����߸�����

//�������ص���������
//1��ͬһ����������
//2������������ͬ
//3�������������Ͳ�ͬ�����߸�����ͬ������˳��ͬ
void func()
{
	cout << "func�ĵ���" << endl;
}

void func(int a)
{
	cout << "func(int a)�ĵ���" << endl;
}

void func(double a)
{
	cout << "func(double a)�ĵ���" << endl;
}

void func(int a,double b)
{
	cout << "func(int a,double b)�ĵ���" << endl;
}

void func(double a,int b)
{
	cout << "func(double a,int b)�ĵ���" << endl;
}
//ע�⣺�����ķ���ֵ��������Ϊ�������ص�����
int main()
{
	func();
	func(10);
	func(5.6);
	func(10,5.6);
	func(5.6,10);

	return 0;
}