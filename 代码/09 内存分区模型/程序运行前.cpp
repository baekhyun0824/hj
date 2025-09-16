#include<iostream>
using namespace std;
//全局变量：定义在函数外面，整个文件都能访问
int g_a = 56;
int g_b = 4;

const int c_g_a = 56;

int main()
{
	//全局区
	//全局变量、静态变量、常量

	//局部变量：定义在函数内部，只在定义它的函数内有效
	int a = 10;
	int b = 20;

	cout << "局部变量a的地址为：" << (int)&a << endl;
	cout << "局部变量b的地址为：" << (int)&b << endl;

	cout << "全局变量g_a的地址为：" << (int)&g_a << endl;
	cout << "全局变量g_b的地址为：" << (int)&g_b << endl;

	//静态变量
	static int s_a = 56;
	static int s_b = 12;

	cout << "静态变量s_a的地址为：" << (int)&s_a << endl;
	cout << "静态变量s_b的地址为：" << (int)&s_b << endl;

	//常量
	
	//1.字符串常量
	cout << "字符串常量的地址为：" << (int)&"hello world" << endl;
	
	//2.const修饰的变量
	
	//2.1 const修饰的全局变量
	cout << "全局常量c_g_a的地址为：" << (int)&c_g_a << endl;
	
	//2.2 const修饰局部变量
	const int c_l_a = 56;//c-const  g-global  l-local
	cout << "局部常量c_l_a的地址为：" << (int)&c_l_a << endl;//不在全局区


	return 0;

}