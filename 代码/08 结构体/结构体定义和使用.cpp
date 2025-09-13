#include<iostream>
using namespace std;
#include<string>

//创建学生类型 ：学生包括（姓名，年龄，分数）
//自定义数据类型，一些类型集合组成的一个类型
//语法  struct  类型名称 { 成员列表 }
struct Student
{
	string name;
	int age;
	int score;
}s3;


int main()
{

	//创建方法1
	struct Student s1;//struct可以省略
	s1.name = "张三";
	s1.age = 18;
	s1.score = 100;
	cout << "姓名：" << s1.name << " 年龄：" << s1.age << " 分数：" << s1.score << endl;
	//创建方法2
	struct Student s2 = {"李四",19,60};
	cout << "姓名：" << s2.name << " 年龄：" << s2.age << " 分数：" << s2.score << endl;
	//创建方法3
	s3.name = "王五";
	s3.age =20 ;
	s3.score = 99;
	cout << "姓名：" << s3.name << " 年龄：" << s3.age << " 分数：" << s3.score << endl;
	
	system("pause");
	return 0;

}