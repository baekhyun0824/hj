#include<iostream>
using namespace std;
#include<string>

//���еĳ�Ա��������һ����Ķ��󣬳Ƹó�ԱΪ �����Ա
class Phone
{
public:
	Phone(string Pname1)
	{
		Pname = Pname1;
	}
	string Pname;

};
class person
{
public:
	//Phone 
	person(string name1, string Pname1):name(name1),phone(Pname1)
	{
	}
	//����
	string name;
	//�ֻ�
	Phone phone;//�����Ա
};
void test01()
{
	person p("�߲���", "ƻ��");
	cout << p.name << "����:" << p.phone.Pname << endl;
}
int main()
{
	test01();
	return 0;
}