#include<iostream>
using namespace std;

int main() {

	/*int num = 0;
	do
	{
		cout << num << endl;
		num++;
	} while (num < 10);*/

	//���� ˮ�ɻ���
	//һ����λ��������ÿ��λ�ϵ����ֵ�3����֮�͵���������

	int num = 100;
	do
	{
		int a = 0;//��λ
		int b = 0;//ʮλ
		int c = 0;//��λ
		a = num % 10;
		b = num / 10 % 10;
		c = num / 100;

		if(a*a*a+b*b*b+c*c*c==num)
		cout << num << endl;
		num++;
	} while (num < 1000);

	system("pause");

	return 0;
}