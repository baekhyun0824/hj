#include<iostream>
using namespace std;

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
//���������ĵ���ʱ��
//1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ������
void test01()
{
	person p1(20);
	person p2(p1);
	cout << "p2�����䣺" << p2.age << endl;
 }
//2��ֵ���ݵķ�ʽ������������ֵ
void dowork(person p)
{

}
void test02()
{
	person p;
	dowork(p);
}
//3��ֵ��ʽ���ؾֲ�����
person dowork2()
{
	person p1;
	return p1;
}
void test03()
{
	person p = dowork2();
}

int main()
{
	//test01();
	test02();
	return 0;
}