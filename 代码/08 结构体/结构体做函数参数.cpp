#include<iostream>
using namespace std;
#include<string>

struct Student
{
	string name;
	int age;
	int score;
};
//ֵ����
void printStudent1(Student s)
{
	s.age = 28;
	cout << "�Ӻ�����  ������" << s.name << " ���䣺" << s.age << " ������" << s.score << endl;
}
//��ַ����
void printStudent2(Student *s)
{
	s->age = 200;
	cout << "�Ӻ���2�� ������" << s->name << " ���䣺" << s->age << " ������" << s->score << endl;
}

int main()
{
	struct Student s= { "����",18,100 };

	printStudent1(s);
	printStudent2(&s);
	cout << "��������  ������" << s.name << " ���䣺" << s.age << " ������" << s.score << endl;

	system("pause");
	return 0;

}