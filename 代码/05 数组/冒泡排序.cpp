#include<iostream>
using namespace std;

int main()
{

	//冒泡排序
	//1.比较相邻的元素
	//2.对每一对相邻元素做相同操作，找到第一个最大值
	//3.重复以上操作，每次比较次数－1，直到不需要比较
	int arr[9] = { 4,2,8,0,5,7,1,3,9 };
	for (int i = 0; i < 9 - 1; i++)
	{
		for (int j = 0; j < 9 - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i]<<endl ;
	}
	system("pause");

	return 0;

}