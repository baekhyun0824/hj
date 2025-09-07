#include<iostream>
using namespace std;

int main()
{

	//二维数组
	//1.数据类型 数组名[行数][列数]；
	int arr[2][3];
	arr[0][0] = 10;
	arr[0][1] = 20;
	arr[0][2] = 30;
	arr[1][0] = 40;
	arr[1][1] = 50;
	arr[1][2] = 60;
	//外层打印行数，内层打印列数
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j] << endl;
		}
	}
	//2.数据类型 数组名[行数][列数]={{数据1，数据2}，{数据3，数据4}}；
	int arr2[2][3] = { {1,2,3},{4,5,6} };
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr2[i][j] <<" ";
		}
		cout << endl;
	}
	//3.数据类型 数组名[行数][列数]={数据1，数据2，数据3，数据4}；
	int arr3[2][3] = { 1,2,3,4,5,6 };
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr3[i][j] <<" ";
		}
		cout << endl;
	}
	//4.数据类型 数组名[][列数]={数据1，数据2，数据3，数据4}；
	int arr4[][3] = { 1,2,3,4,5,6 };
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr4[i][j] << " ";
		}
		cout << endl;
	}
	//二维数组数组名
	//1.可以通过数组名统计整个数组占用内存大小
	int arr[2][3] = { {1,2,3},{4,5,6} };
	cout << "二维数组占用内存空间：" << sizeof(arr) << endl;
	cout << "二维数组第一行占用内存空间：" << sizeof(arr[0]) << endl;
	cout << "二维数组第一个元素占用内存空间：" << sizeof(arr[0][0]) << endl;

	cout << "二维数组的行数：" << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "二维数组的列数：" << sizeof(arr[0]) /sizeof(arr[0][0]) << endl;

	//2.可以通过数组名获取到数组首地址位置
	cout << "二维数组首地址为：" << ( int ) arr << endl;
	cout << "二维数组第一行首地址为：" << (int)arr[0] << endl;
	cout << "二维数组第二行首地址为：" << (int)arr[1] << endl;

	cout << "二维数组第一个元素首地址为：" << (int)&arr[0][0] << endl;
	cout << "二维数组第二个元素首地址为：" << (int)&arr[0][1] << endl;
	
	system("pause");

	return 0;

}