#include<iostream>
using namespace std;

int main(){
	//�Ӽ��˳�
	int a1 = 56;
	int b1 = 4;

	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl;//����������� ��Ϊ����

	double d1 = 0.4;
	double d2 = 0.2;
	cout << d1 / d2 << endl;
	
	//ȡģ(ȡ��)
	cout << a1 % b1 << endl;
	//����С��������ȡ������


	//����
	//1.ǰ��
	++a1;
	cout << a1 << endl;
	//2.����
	b1++;
	cout << a1 << endl;
	//����
	int a2 = 10;
	int b2 = ++a2 * 10;
	cout << b2 << endl;

	int a3 = 10;
	int b3 = a3++ * 10;
	cout << b3 << endl;

	system("pause");
    
    return 0;
}