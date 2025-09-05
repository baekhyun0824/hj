#include<iostream>
using namespace std;

int main() {
	//逻辑运算 与或非

	//非 ！
	int a = 10;
	cout << !a << endl;
	cout << !!a << endl;

	//与 && 同真为真

	int b = 10;
	cout << ( a && b) << endl;
	a = 10;
	b = 0;
	cout << (a && b) << endl;
	a = 0;
	b = 0;
	cout << (a && b) << endl;

	//或 || 有真为真
	a = 10;
	b = 10;
	cout << (a || b) << endl;
	a = 10;
	b = 0;
	cout << (a || b) << endl;
	a = 0;
	b = 0;
	cout << (a || b) << endl;


	system("pause");

	return 0;
}