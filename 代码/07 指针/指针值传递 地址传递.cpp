#include<iostream>
using namespace std;

//ֵ����
void swap01(int a, int b)
{
	int temp = a;//temp=a=10
	a = b;//a=20
	b = temp;//b=10
}
//��ַ����
void swap02(int *p1, int *p2)
{
	int temp = *p1;//tempָ��p1 ���ڵ�ַ�����ݣ���a��ֵ
	*p1 = *p2;//p1���ڵ�ַ��ֵ��p2���ڵ�ַ��ֵ��������a=20
	*p2 = temp;//p2���ڵ�ַ��ֵ��Ϊԭa��ֵ
}

void swap03(int *p1, int *p2)
{
	int * temp = p1;//tempָ��p1���ڵ�ַ
	p1 = p2;//p1���ڵ�ַ��p2���ڵ�ַ����
	p2 = temp;
}

int main()
{

	int a = 10;
	int b = 20;
	swap01(a, b);//���a,bֵ����
	swap02(&a, &b);//���a,bֵ����
	swap03(&a, &b);//���a,bֵ����

	cout << "a =" << a << endl;
	cout << "b =" << b << endl;

	return 0;

}