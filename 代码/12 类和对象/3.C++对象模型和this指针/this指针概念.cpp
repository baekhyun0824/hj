#include<iostream>
using namespace std;

//thisָ����������ÿһ���Ǿ�̬��Ա�����ڵ�һ��ָ��
//thisָ�벻��Ҫ���壬ֱ��ʹ�ü���

//thisָ����;
class person
{
	
public:
	person(int age)
	{
		//thisָ��ָ�� �����õĳ�Ա���� �����Ķ���
		this->age = age;
	}
	person& personaddage(person p)
	{
		this->age += p.age;
		return *this;
	}
	int age;
};

//1��������Ƴ�ͻ
void test01()
{
	person p1(18);
	
	cout << "p1������Ϊ��" << p1.age << endl;
}
//2�����صĶ�������*this
void test02()
{
	person p1(10);
	person p2(10);

	//��ʽ���˼��
	p2.personaddage(p1).personaddage(p1).personaddage(p1);
	cout << "p2������Ϊ��" << p2.age << endl;
}

int main()
{
	//test01();
	test02();
	return 0;

}