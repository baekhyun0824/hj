#include<iostream>
using namespace std;

int main()
{

	int a = 10;
	int b = 20;
	//����ָ��
	//���ε���ָ�룬ָ��ָ����Ըģ�ָ��ָ���ֵ�����Ը���
	const int *p1 = &a;
	p1 = &b;
	//*p1 = 100;

	//ָ�볣��
	//���ε��ǳ�����ָ��ָ�򲻿��Ըģ�ָ��ָ���ֵ���Ը���
	int * const p2 = &a;
	*p2 = 100;
	//p2 = &b;

	//const����ָ�������γ���
	const int * const p3 = &a;
	//p3=&b;
	//*p=100;

	system("pause");
	return 0;

}