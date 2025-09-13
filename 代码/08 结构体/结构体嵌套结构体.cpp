#include<iostream>
using namespace std;
#include<string>

struct Student
{
	string name;
	int age;
	int score;
};
//定义老师结构体
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
	t.name = "老王";
	t.age = 50;
	t.stu = { "张三",18,100 };

	cout << "教师姓名：" << t.name << " 教师年龄：" << t.age << " 教师编号：" << t.id<< endl;
	cout << "辅导学员  姓名：" << t.stu.name << " 年龄：" << t.stu.age << " 分数：" << t.stu.score << endl;

	system("pause");
	return 0;

}