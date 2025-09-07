#include<iostream>
using namespace std;

int main()
{

	//五只小猪称体重
	int arr[5] = { 300,350.200,400,250 };
	int max = 0;
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	cout << max << endl;
	//数组元素逆序
	int arr[5] = { 1,3,2,5,4 };
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] ;
	}
	cout << endl;
	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0]) - 1;
	for (; start < end; )
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
	for (int j = 0; j< 5; j++)
	{
		cout << arr[j];
	}

	system("pause");

	return 0;

}