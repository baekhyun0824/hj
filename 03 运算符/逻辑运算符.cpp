#include<iostream>
using namespace std;

int main() {
	//�߼����� ����

	//�� ��
	int a = 10;
	cout << !a << endl;
	cout << !!a << endl;

	//�� && ͬ��Ϊ��

	int b = 10;
	cout << ( a && b) << endl;
	a = 10;
	b = 0;
	cout << (a && b) << endl;
	a = 0;
	b = 0;
	cout << (a && b) << endl;

	//�� || ����Ϊ��
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