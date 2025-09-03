#include<iostream>
using namespace std;

int main(){
	//加减乘除
	int a1 = 56;
	int b1 = 4;

	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl;//两个整数相除 仍为整数

	double d1 = 0.4;
	double d2 = 0.2;
	cout << d1 / d2 << endl;
	
	//取模(取余)
	cout << a1 % b1 << endl;
	//两个小数不可以取余运算


	//递增
	//1.前置
	++a1;
	cout << a1 << endl;
	//2.后置
	b1++;
	cout << a1 << endl;
	//区别
	int a2 = 10;
	int b2 = ++a2 * 10;
	cout << b2 << endl;

	int a3 = 10;
	int b3 = a3++ * 10;
	cout << b3 << endl;

	system("pause");
    
    return 0;
}