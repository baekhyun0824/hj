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
	//������Ϊ8��int��Ҫ��4�ı�����ʼ
	struct MyStruct2
	{
		char a;
		int c;
		char b;
	};
	cout << "MyStruct2 : " << sizeof(MyStruct2) << endl;
	//������Ϊ12���ṹ��ĳ�Ա�ᰴ�������ʹ�С���У��߽����

	return 0;
}