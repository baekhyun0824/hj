#include<iostream>
using namespace std;

//�����������ķ���ֵ
//1.��Ҫ���ؾֲ�����������
int& test01()
{
	int a = 10;
	return a;
}
int& test02()
{
	static int a = 10;//��̬���������ȫ����
	return a;
}

int main()
{
	//int &ref = test01();
	//cout << "ref=" << ref << endl;//��һ�ν����ȷ������Ϊ���������˱���
	//cout << "ref=" << ref << endl;//�ڶ��ν������a���ڴ��Ѿ��ͷ�

	int &ref = test02();
	cout << "ref=" << ref << endl;
	cout << "ref=" << ref << endl;

	test02() = 1000;//��������ķ���ֵ�����ã�����������ÿ�����Ϊ��ֵ
	cout << "ref=" << ref << endl;
	cout << "ref=" << ref << endl;

	return 0;
}