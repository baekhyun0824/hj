#include<iostream>
using namespace std;

//ǳ�������򵥵ĸ�ֵ��������
//�����
class person
{
public:
	person()
	{
		cout << "person��Ĭ�Ϲ��캯������" << endl;
	}
	person(int age1, int height1 )
	{
		age = age1;
		height = new int(height1);
		cout << "person���вι��캯������" << endl;
	}
	person(const person & p)
	{
		cout << "person�Ŀ������캯������" << endl;
		age = p.age;
		//�������
		height = new int(*p.height);
		
	}
	~person()
	{
		//�����������������ٵ��������ͷŴ���
		cout << "person��������������" << endl;
		if (height != NULL)
		{
			delete height;
		}
	}
	//���������������Ļ���ִ�д˴�������������һ��ִ�е�ʱ��������������ǳ����height�ĵ�ַ��һ���ģ��ڶ���ִ�е�ʱ��Ϊ�ظ�����
	int age;
	int *height;//����ڶ���

};
void test01()
{
	person p1(18,160);
	cout << "p1������Ϊ��" << p1.age << "���Ϊ��" << *p1.height << endl;
	person p2(p1);
	cout << "p2������Ϊ��" << p2.age << "���Ϊ��" << *p2.height << endl;
}

int main()
{
	test01();
	return 0;
}