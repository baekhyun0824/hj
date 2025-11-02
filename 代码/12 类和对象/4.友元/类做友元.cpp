#include<iostream>
#include<string>


class Building;
class Goodgay
{
public:
	Goodgay();
	void visit();  //参观函数 访问building中的属性
private:
	Building *building;
};

class Building
{
	friend class Goodgay;
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
	std::cout << "好基友正在访问：" << building->m_sittingroom << std::endl;
	std::cout << "好基友正在访问：" << building->m_bedroom << std::endl;
}
void test01()
{
	Goodgay g;
	g.visit();
}
int main()
{
	test01();
	return 0;
}