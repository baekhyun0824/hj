#include<iostream>
using namespace std;

//构造函数 初始化
class person
{
public:
	//构造函数 初始化
	person()
	{
		cout << "person构造函数调用" << endl;
	}
	//析构函数 进行清理
	~person()
	{
		cout << "person析构函数调用" << endl;
	}
};

void test01()
{
	person p;
}

int main()
{
	//test01();
	person p;
	return 0;
}
