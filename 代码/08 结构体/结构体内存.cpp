#include<iostream>
using namespace std;

int main() {

	struct MyStruct1
	{
		char a;		// 1
		char b;		// 1
		int c;		// 4
	};
	cout << "MyStruct1 : " << sizeof(MyStruct1) << endl; 
	//输出结果为8，int需要从4的倍数开始
	struct MyStruct2
	{
		char a;
		int c;
		char b;
	};
	cout << "MyStruct2 : " << sizeof(MyStruct2) << endl;
	//输出结果为12，结构体的成员会按照其类型大小进行，边界对齐

	return 0;
}