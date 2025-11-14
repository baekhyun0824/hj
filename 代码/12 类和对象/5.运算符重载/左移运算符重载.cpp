#include<iostream>
using namespace std;

//左移运算符重载

class person
{
	friend ostream&operator<<(ostream&cout, person &p);
public:
	person(int a,int b)
	{
		m_A = a;
		m_B = b;
	}
private:
	//利用成员函数重载 左移运算符
	//p.operator<<(cout)   简化版 p<<cout
	//不会利用成员函数重载<<运算符，因为无法实现cout在左侧
	/*void operator<<(person &p)
	{
	}*/
	
	int m_A;
	int m_B;
};

//全局函数重载左移运算符
ostream & operator<<(ostream &cout, person &p)
{
	cout << "m_A=" << p.m_A << " m_B=" << p.m_B;
	return cout;
}

void test01()
{
	person p1(10,20);
	/*p1.m_A = 10;
	p1.m_B = 10;*/
	cout << p1 << " helloworld" <<endl;
	
}


int main()
{
	test01();

	return 0;
}