#include<iostream>
using namespace std;

int main()
{

	//����
	//1.�������� ������[���鳤��]
	int arr[5];
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;
	cout << arr[0] << endl;
	cout << arr[1] << endl;
	cout << arr[2] << endl;
	cout << arr[3] << endl;
	cout << arr[4] << endl;
	//2.�������� ������[���鳤��]={ֵ1��ֵ2...}
	int arr2[5] = { 10,20,30,40,50 };
	cout << arr2[0] << endl;
	cout << arr2[1] << endl;
	cout << arr2[2] << endl;
	cout << arr2[3] << endl;
	cout << arr2[4] << endl;
	//3.�������� ������[]={ֵ1��ֵ2...}
	int arr3[] = { 10,20,30,40,50,60,70,80,90 };
	for (int i = 0; i < 9; i++)
	{
		cout << arr3[i] << endl;
	}
	//��������;
	//1.����ͨ��������ͳ����������ռ���ڴ��С
	int arr[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	cout << "��������ռ���ڴ�ռ䣺" << sizeof(arr) << endl;
	cout << "ÿ��Ԫ��ռ���ڴ�ռ䣺" << sizeof(arr[0]) << endl;
	cout << "������Ԫ�صĸ�����" << sizeof(arr) /sizeof(arr[0]) << endl;
	//2.����ͨ����������ȡ�������׵�ַλ��
	cout << "�����׵�ַΪ��" << ( int ) arr << endl;
	cout << "�����е�һ��Ԫ�ص�ַΪ��" << (int)&arr[0] << endl;
	cout << "�����еڶ���Ԫ�ص�ַΪ��" << (int)&arr[1] << endl;

	
	system("pause");
	
	return 0;

}