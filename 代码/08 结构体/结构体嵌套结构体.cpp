#include<iostream>
using namespace std;
#include<string>

struct Student
{
	string name;
	int age;
	int score;
};
//������ʦ�ṹ��
struct Teacher
{
	int id;
	string name;
	int age;
	struct Student stu;
};

int main()
{
	Teacher t;
	t.id = 10000;
	t.name = "����";
	t.age = 50;
	t.stu = { "����",18,100 };

	cout << "��ʦ������" << t.name << " ��ʦ���䣺" << t.age << " ��ʦ��ţ�" << t.id<< endl;
	cout << "����ѧԱ  ������" << t.stu.name << " ���䣺" << t.stu.age << " ������" << t.stu.score << endl;

	system("pause");
	return 0;

}