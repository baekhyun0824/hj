#include<iostream>
using namespace std;

//��������ע������
//1��������Ϊ��������

void func(int &a)
{
	cout << "func(int &a)�ĵ���" << endl;
}

void func(const int &a)
{
	cout << "func(const int &a)�ĵ���" << endl;
}
//2��������������Ĭ�ϲ���
void func2(int a,int b=20)
{
	cout << "func(int a)�ĵ���" << endl;
}
void func2(int a)
{
	cout << "func(int a)�ĵ���" << endl;
}


int main()
{
	/*int a = 10;
	func(a);*/

	func(10);
	//func2(10);//�ȿ��Ե���func2(int a,int b=20)���ֿ��Ե���func2(int a)����������

	return 0;
}