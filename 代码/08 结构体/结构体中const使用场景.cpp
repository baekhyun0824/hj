#include<iostream>
using namespace std;
#include<string>

struct Student
{
	string name;
	int age;
	int score;
};

//��ַ����
void printStudent(const Student *s)//��ֹ�����
{
	cout << " ������" << s->name << " ���䣺" << s->age << " ������" << s->score << endl;
}

int main()
{
	struct Student s = { "����",18,100 };

	printStudent(&s);
	cout << "��������  ������" << s.name << " ���䣺" << s.age << " ������" << s.score << endl;

	system("pause");
	return 0;
}