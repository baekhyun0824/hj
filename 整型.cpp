#include<iostream>
using namespace std;

//�곣��
#define day 7

int main() {
	
	//����ע��
	/* ����ע�� */
	cout << "һ�����ܹ���" << day << "��" << endl;
	//���α��� const
	const int month = 12;
	cout << "һ�����ܹ���" << month << "���·�" << endl;
	//����
	  //������
	short num1 = 32768;

	  //����
	int num2 = 10;

	  //������
	long num3 = 10;

	  //��������
	long long num4 = 10;

	cout << "short ������ռ�ڴ�ռ�Ϊ��" << sizeof(short) << endl;

	cout << "int ������ռ�ڴ�ռ�Ϊ��" << sizeof(int) << endl;

	cout << "long ������ռ�ڴ�ռ�Ϊ��" << sizeof(long) << endl;

	cout << "long long ������ռ�ڴ�ռ�Ϊ��" << sizeof(long long) << endl;

	system("pause");

	return 0;
}