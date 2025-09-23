#include<iostream>
using namespace std;

//类在设计时，可以把属性和行为放在不同的权限下，加以控制
//访问权限：
//1、公共权限 public       成员类内可以访问，类外可以访问
//2、保护权限 protected    成员类内可以访问，类外不可以访问
//3、私有权限 private      成员类内可以访问，类外不可以访问

class person
{
public:
	string name;
protected:
	string car;
private:
	int password;

public:
	void func()
	{
		name = "边伯贤";
		car = "玛莎拉蒂";
		password = 920506;
	}
};
int main()
{
	person p;
	p.name = "韩洁";
	//p.car = "小电驴";//保护权限类外访问不到
	//p.password = 123456;//隐私权限类外访问不到
	person p1;
	p1.func();

	return 0;
}