#include<iostream>
using namespace std;

//����Ĭ�ϲ���
//��������Լ��������ݣ������Լ������ݣ����û�У���ô��Ĭ��ֵ
int func(int a, int b, int c)
{
	return a + b + c;
}
//ע�⣺���ĳ��λ���Ѿ�����Ĭ�ϲ�������ô�����λ�����󣬴����Ҷ�������Ĭ��ֵ
int func1(int a, int b = 56, int c = 4)
{
	return a + b + c;
}
//�������������Ĭ�ϲ���������ʵ�־Ͳ�����Ĭ�ϲ���
//������ʵ��ֻ����һ����Ĭ�ϲ���
int func2(int a = 9, int b = 56, int c = 4);
int func2(int a, int b, int c)
{
	return a + b + c;
}
int main()
{
	cout << func(10, 20, 30) << endl;
	cout << func1(10) << endl;
	cout << func2() << endl;

	return 0;
}
