#include<iostream>
using namespace std;

//Ĭ������£�C++���������ٸ�һ�������3������
//1��Ĭ�Ϲ��캯��
//2��Ĭ����������
//3��Ĭ�Ͽ������캯���������Խ���ֵ����

//���캯�����ù���
//1������û������вι��캯����C++�����ṩĬ���޲ι��죬���ǻ��ṩĬ�Ͽ�������
//2������û����忽�����캯����C++�������ṩ�������캯��

class person
{
public:
	person()
	{
		cout << "person��Ĭ�Ϲ��캯������" << endl;
	}
	person(int age)
	{
		cout << "person���вι��캯������" << endl;
	}
	person(const person & p)
	{
		age = p.age;
		cout << "person�Ŀ������캯������" << endl;
	}
	~person()
	{
		cout << "person��������������" << endl;
	}
	int age;

};
void test01()
{
	person p;
	p.age = 18;

	person p2(p);
	cout << "p2������Ϊ��" << p2.age << endl;
}

int main()
{
	test01();
	return 0;
}