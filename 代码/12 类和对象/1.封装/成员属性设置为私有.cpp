#include<iostream>
using namespace std;
#include<string>

//优点1：将属性设置为私有，可以控制读写权限
//优点2：对于读写权限，我们可以检测数据有效性
class person
{
public:
	//设置姓名
	void setname(string name1)
	{
		name = name1;
	}
	//获取姓名
	string getname()
	{
		return name;
	}
	//获取年龄
	int getage()
	{
		return age;
	}
	//设置年龄
	void setage(int age1)
	{
		if (age1 < 0 || age1>150)
		{
			cout << "年龄输入有误，赋值失败" << endl;
			return;
		}
		age = age1;
	}
	//设置偶像
	void setidol(string idol1)
	{
		idol = idol1;
	}
private:
	string name;//姓名 可读可写
	int age;//年龄 只读 也可以写但是要求年龄必须在0~150之间
	string idol;//偶像 只写

};
int main()
{
	person p;
	p.setname("韩洁");
	cout << "姓名：" << p.getname()<< endl;
	p.setage(24);
	cout << "年龄：" << p.getage() << endl;
	p.setidol("边伯贤");

	return 0;
}