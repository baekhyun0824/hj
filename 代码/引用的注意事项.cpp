#include<iostream>
using namespace std;
int main()
{
	//���ñ���Ҫ��ʼ��
	int a = 10;
	int &b = a;
	/*int &b ;*/
	//��ʼ����Ͳ����Ը�����
	int c = 20;
	b = c;//��ֵ���������Ǹ�������    

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;

	return 0;
}