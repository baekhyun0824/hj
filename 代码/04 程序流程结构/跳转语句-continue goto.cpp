#include<iostream>
using namespace std;

int main() {

	//1.continue��������ѭ����ִ����һ��
	//for (int j = 0; j < 100; j++)
	//{
	//	//���������ż�������
	//	if (j %2==0)
	//	{
	//		continue;
	//	}
	//	cout << j << endl;
	//}
	//2.goto���
	
	cout << "1" <<endl;
	goto flag;
	cout << "2" << endl;
	cout << "3" << endl;
	cout << "4" << endl;
flag:
	cout << "5" << endl;

	system("pause");

	return 0;
}