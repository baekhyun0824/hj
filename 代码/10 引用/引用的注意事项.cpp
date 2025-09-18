#include<iostream>
using namespace std;
int main()
{
	//引用必须要初始化
	int a = 10;
	int &b = a;
	/*int &b ;*/
	//初始化后就不可以更改了
	int c = 20;
	b = c;//赋值操作，不是更改引用    

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;

	return 0;
}