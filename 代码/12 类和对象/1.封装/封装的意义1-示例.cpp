#include<iostream>
using namespace std;
#include<string>
//设计一个学生类，属性有姓名和学号，可以给姓名和学号赋值，可以显示学生的姓名和学号

//class 代表设计一个类，类后面紧跟着的就是类名称
class student
{
public:

	//属性
	//姓名 学号
	string name;
	int id;

	//行为
	//显示姓名和学号
	void showstudent()
	{
		cout << "姓名:" << name << " ID:" << id << endl;
	}
	//利用行为赋值
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
	stu.name = "边伯贤";
	stu.id = 19920506;
	stu.showstudent();

	//赋值方法2
	student stu2;
	stu2.setname("韩洁");
	stu2.setid (20011010);
	stu2.showstudent();

	return 0;
}