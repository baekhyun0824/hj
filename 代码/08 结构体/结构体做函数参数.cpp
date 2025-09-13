#include<iostream>
using namespace std;
#include<string>

struct Student
{
	string name;
	int age;
	int score;
};
//值传递
void printStudent1(Student s)
{
	s.age = 28;
	cout << "子函数中  姓名：" << s.name << " 年龄：" << s.age << " 分数：" << s.score << endl;
}
//地址传递
void printStudent2(Student *s)
{
	s->age = 200;
	cout << "子函数2中 姓名：" << s->name << " 年龄：" << s->age << " 分数：" << s->score << endl;
}

int main()
{
	struct Student s= { "张三",18,100 };

	printStudent1(s);
	printStudent2(&s);
	cout << "主函数中  姓名：" << s.name << " 年龄：" << s.age << " 分数：" << s.score << endl;

	system("pause");
	return 0;

}