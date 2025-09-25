#include<iostream>
using namespace std;

//初始化列表
//构造函数（）：属性1（值1），属性2（值2）...{}
class person 
{
public:
	int A;
	int B;
	int C;
	//传统初始化操作
	/*person(int a, int b, int c)
	{
		A = a;
		B = b;
		C = c;
	}*/

	//初始化列表初始化
	person(int a,int b,int c):A(a), B(b), C(c){}
};

void test01()
{
	//person p(1, 2, 3);
	person p(3,2,1);
	cout << "A=" << p.A << endl;
	cout << "B=" << p.B << endl;
	cout << "C=" << p.C << endl;
	
}
int main()
{
	test01();
	
	return 0;
}