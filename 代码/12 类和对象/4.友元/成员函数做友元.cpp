#include<iostream>
#include<string>

class Building;
class Goodgay
{
public:
	Goodgay();
	void visit();  //让visit函数可以访问Building中私有成员
	void visit2(); //让visit2函数不可以访问Building中私有成员
private:
	Building *building;
};

class Building
{
	friend void Goodgay::visit();
public:
	Building();
public:
	std::string m_sittingroom;
private:
	std::string m_bedroom;
};

//类外写成员函数
Building::Building()
{
	m_sittingroom = "客厅";
	m_bedroom = "卧室";
}
Goodgay::Goodgay()
{
	building = new Building;
}
void Goodgay::visit()
{
	std::cout << "visit正在访问：" << building->m_sittingroom << std::endl;
	std::cout << "visit正在访问：" << building->m_bedroom << std::endl;
}
void Goodgay::visit2()
{
	std::cout << "visit2正在访问：" << building->m_sittingroom << std::endl;
	//std::cout << "visit2正在访问：" << building->m_bedroom << std::endl;
}
void test01()
{
	Goodgay g;
	g.visit();
	g.visit2();
}
int main()
{
	test01();
	return 0;
}