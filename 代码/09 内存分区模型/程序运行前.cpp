#include<iostream>
using namespace std;
//ȫ�ֱ����������ں������棬�����ļ����ܷ���
int g_a = 56;
int g_b = 4;

const int c_g_a = 56;

int main()
{
	//ȫ����
	//ȫ�ֱ�������̬����������

	//�ֲ������������ں����ڲ���ֻ�ڶ������ĺ�������Ч
	int a = 10;
	int b = 20;

	cout << "�ֲ�����a�ĵ�ַΪ��" << (int)&a << endl;
	cout << "�ֲ�����b�ĵ�ַΪ��" << (int)&b << endl;

	cout << "ȫ�ֱ���g_a�ĵ�ַΪ��" << (int)&g_a << endl;
	cout << "ȫ�ֱ���g_b�ĵ�ַΪ��" << (int)&g_b << endl;

	//��̬����
	static int s_a = 56;
	static int s_b = 12;

	cout << "��̬����s_a�ĵ�ַΪ��" << (int)&s_a << endl;
	cout << "��̬����s_b�ĵ�ַΪ��" << (int)&s_b << endl;

	//����
	
	//1.�ַ�������
	cout << "�ַ��������ĵ�ַΪ��" << (int)&"hello world" << endl;
	
	//2.const���εı���
	
	//2.1 const���ε�ȫ�ֱ���
	cout << "ȫ�ֳ���c_g_a�ĵ�ַΪ��" << (int)&c_g_a << endl;
	
	//2.2 const���ξֲ�����
	const int c_l_a = 56;//c-const  g-global  l-local
	cout << "�ֲ�����c_l_a�ĵ�ַΪ��" << (int)&c_l_a << endl;//����ȫ����


	return 0;

}