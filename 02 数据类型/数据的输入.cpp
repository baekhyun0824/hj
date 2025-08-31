#include<iostream>
using namespace std;
#include<string>

int main() {
	//多行同时加注释符号Ctrl+k+c

	//整型
	int a = 0;
	cout << "请给整型变量a赋值：" << endl;
	cin >> a;
	cout << "整型a=" << a << endl;

	//浮点型
	float f = 3.14f;
	cout << "请给浮点型变量f赋值：" << endl;
	cin >> f;
	cout << "浮点型变量f=" << f << endl;

	//字符型
	float ch = 'a';
	cout << "请给字符型变量ch赋值：" << endl;
	cin >> ch;
	cout << "字符型ch=" << ch << endl;

	//字符串型
	string str ;
	cout << "请给字符串型变量str赋值：" << endl;
	cin >> str;
	cout << "字符串型str=" << str << endl;

	//布尔类型
	bool flag = false;//true代表真
	cout << "请给布尔类型变量flag赋值：" << endl;
	cin >> flag;
	cout << "布尔类型flag=" << flag << endl;

	system("pause");

	return 0;
}