#include<iostream>
using namespace std;
#include<string>

struct Student
{
	string name;
	int age;
	int score;
};


int main()
{

	struct Student s1 ={ "张三",18,100 };
	Student * p = &s1;
	//指针通过->访问结构体
	cout << "姓名：" << p->name << " 年龄：" << p->age << " 分数：" << p->score << endl;

	system("pause");
	return 0;

}