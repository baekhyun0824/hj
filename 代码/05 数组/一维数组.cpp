#include<iostream>
using namespace std;

int main()
{

	//数组
	//1.数据类型 数组名[数组长度]
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
	//2.数据类型 数组名[数组长度]={值1，值2...}
	int arr2[5] = { 10,20,30,40,50 };
	cout << arr2[0] << endl;
	cout << arr2[1] << endl;
	cout << arr2[2] << endl;
	cout << arr2[3] << endl;
	cout << arr2[4] << endl;
	//3.数据类型 数组名[]={值1，值2...}
	int arr3[] = { 10,20,30,40,50,60,70,80,90 };
	for (int i = 0; i < 9; i++)
	{
		cout << arr3[i] << endl;
	}
	//数组名用途
	//1.可以通过数组名统计整个数组占用内存大小
	int arr[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	cout << "整个数组占用内存空间：" << sizeof(arr) << endl;
	cout << "每个元素占用内存空间：" << sizeof(arr[0]) << endl;
	cout << "数组中元素的个数：" << sizeof(arr) /sizeof(arr[0]) << endl;
	//2.可以通过数组名获取到数组首地址位置
	cout << "数组首地址为：" << ( int ) arr << endl;
	cout << "数组中第一个元素地址为：" << (int)&arr[0] << endl;
	cout << "数组中第二个元素地址为：" << (int)&arr[1] << endl;

	
	system("pause");
	
	return 0;

}