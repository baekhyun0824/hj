#include<iostream>
using namespace std;
#include<string>
//���һ��ѧ���࣬������������ѧ�ţ����Ը�������ѧ�Ÿ�ֵ��������ʾѧ����������ѧ��

//class �������һ���࣬���������ŵľ���������
class student
{
public:

	//����
	//���� ѧ��
	string name;
	int id;

	//��Ϊ
	//��ʾ������ѧ��
	void showstudent()
	{
		cout << "����:" << name << " ID:" << id << endl;
	}
	//������Ϊ��ֵ
	void setname(string name1)
	{
		name = name1;
	}
	/*void setid(int id1)
	{
		id = id1;
	}*/
	void setid(int id)
	{
		this-> id = id;
	}
};

int main()
{
	student stu;
	stu.name = "�߲���";
	stu.id = 19920506;
	stu.showstudent();

	//��ֵ����2
	student stu2;
	stu2.setname("����");
	stu2.setid (20011010);
	stu2.showstudent();

	return 0;
}