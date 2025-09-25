#include<iostream>
using namespace std;
#include<string>

//类中的成员可以是另一个类的对象，称该成员为 对象成员
class Phone
{
public:
	Phone(string Pname1)
	{
		Pname = Pname1;
	}
	string Pname;

};
class person
{
public:
	//Phone 
	person(string name1, string Pname1):name(name1),phone(Pname1)
	{
	}
	//姓名
	string name;
	//手机
	Phone phone;//对象成员
};
void test01()
{
	person p("边伯贤", "苹果");
	cout << p.name << "拿着:" << p.phone.Pname << endl;
}
int main()
{
	test01();
	return 0;
}