#include<iostream>
using namespace std;

//������
class person
{
public:
	//thisָ��ı��� ��ָ�볣�� ָ���ָ���ǲ������޸ĵ�
	void showperson()const//const person *const this;
	//�ڳ�Ա���������const�����ε���thisָ����ָ��ָ���ֵҲ�������޸�
	{
		m_b=100;
		//m_a = 100;
		//this=NULL;//this ָ�벻�����޸�ָ���ָ��
	}
	void func() {};
	int m_a;
	mutable int m_b;///�����������ʹ�ڳ������У�Ҳ�����޸����ֵ���ӹؼ���mutable
};

void test01()
{
	person p;
	p.showperson();
}
//������
void test02()
{
	const person p;//�ڶ���ǰ��const����Ϊ������
	//p.m_a = 100;
	p.m_b = 100;//����ֵ���ڳ�������Ҳ�����޸�

	//������ֻ�ܵ��ó�����
	p.showperson();
	//p.func();

}
int main()
{
	//test01();
	test02();
	return 0;
}