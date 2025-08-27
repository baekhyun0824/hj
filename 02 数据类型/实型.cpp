#include<iostream>
using namespace std;

int main() {

	//单精度float
	float f1 = 3.14159262f;
	//双精度double
	double d1 = 3.1415926;
	//默认情况下，输出一个小数，会显示出6位有效数字
	cout << f1 << endl;
	cout << d1 << endl;
	cout << "f1所占内存空间为：" << sizeof(f1) << endl;
	cout << "d1所占内存空间为：" << sizeof(d1) << endl;

    //科学计数法
	float f2 = 3e2;
	cout << "f2=" << f2 << endl;
	double f3 = 3e-2;
	cout << "f3=" << f3 << endl;

	system("pause");

	return 0;
}
