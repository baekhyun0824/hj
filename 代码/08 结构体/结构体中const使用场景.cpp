#include<iostream>
using namespace std;
#include<string>

struct Student
{
	string name;
	int age;
	int score;
};

//地址传递
void printStudent(const Student *s)//防止误操作
{
	cout << " 姓名：" << s->name << " 年龄：" << s->age << " 分数：" << s->score << endl;
}

int main()
{
	struct Student s = { "张三",18,100 };

	printStudent(&s);
	cout << "主函数中  姓名：" << s.name << " 年龄：" << s.age << " 分数：" << s.score << endl;

	system("pause");
	return 0;
}