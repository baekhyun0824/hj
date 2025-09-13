#include<iostream>
using namespace std;
#include<string>

//语法  struct  结构体名  数组名[元素个数]={ {}，{}，... }
struct Student
{
	string name;
	int age;
	int score;
};


int main()
{

	//创建方法1
	struct Student arr[3]=
	{
		{ "张三",18,100},
		{ "李四",19,60 },
		{ "王五",20,99 }

	};
	arr[2].name = "赵六";
	arr[2].age = 23;
	arr[2].score =99;

	for (int i = 0; i < 3; i++)
	{
		cout << "姓名：" << arr[i].name << " 年龄：" << arr[i].age << " 分数：" << arr[i].score << endl;
	}
	
	system("pause");
	return 0;

}