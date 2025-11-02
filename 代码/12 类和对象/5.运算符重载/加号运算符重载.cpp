#include<iostream>

//加号运算符重载

class person
{
public:

	//1、成员函数重载+号
	/*person operator+(person &p)
	{
		person temp;
		temp.m_A = m_A + p.m_A;
		temp.m_B = m_B + p.m_B;
		return temp;
	}*/
	int m_A;
	int m_B;
};

//2、全局函数实现+号运算符重载
person operator+(person& p1, person& p2)
{
	person temp;
	temp.m_A = p1.m_A + p2.m_A;
	temp.m_B = p1.m_B + p2.m_B;
	return temp;
}

void test01()
{
	person p1;
	p1.m_A = 10;
	p1.m_B = 10;
	person p2;
	p2.m_A = 10;
	p2.m_B = 10;

	person p3 = p1 + p2;
	std::cout << "p3.m_A = " << p3.m_A << std::endl;
	std::cout << "p3.m_B = " << p3.m_B << std::endl;

}


int main()
{
	test01();

	return 0;
}