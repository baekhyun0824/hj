#include<iostream>
using namespace std;

//���캯�� ��ʼ��
class person
{
public:
	//���캯�� ��ʼ��
	person()
	{
		cout << "person���캯������" << endl;
	}
	//�������� ��������
	~person()
	{
		cout << "person������������" << endl;
	}
};

void test01()
{
	person p;
}

int main()
{
	//test01();
	person p;
	return 0;
}
