#include<iostream>
using namespace std;

//���캯������
//�������֣��вι�����޲ι��죨Ĭ�ϣ�
//�����ͷ֣���ͨ����Ϳ�������
//���÷�ʽ
//���ŷ�
//��ʾ��
//��ʽת����
class person
{
public:
	//���캯�� ��ʼ��
	person() 
	{
		cout << "person���޲ι��캯������" << endl;
	}
	person(int a)
	{
		age = a;
		cout << "person���вι��캯������" << endl;
	}
	//�������캯��
	person(const person &p)
	{
		age = p.age;
		cout << "person�Ŀ������캯������" << endl;
	}
	int age;
};

void test01()
{
	//���ŷ�
	/*person p1;
	person p2(23);
	person p3(p2);

	cout << "p2������Ϊ��" << p2.age << endl;
	cout << "p3������Ϊ��" << p3.age << endl;*/
	//��ʾ��
	person p1;
	person p2 = person(23);
	person p3 = person(p2);

	person(23);//�������� �ص㣺��ǰִ�н�����ϵͳ���������յ���������
	//��ʽת����
	person p4 = 10;//�൱��д��person p4=person��10����
	person p5 = p4;
	cout << "p4������Ϊ��" << p4.age << endl;
}

int main()
{
	test01();
	return 0;
}
