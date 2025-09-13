#include<iostream>
using namespace std;
#include<string>

struct hero
{
	string name;
	int age;
	string sex;
};
//冒泡排序函数  参数1 数组的首地址  参数2  数组长度
void bubbleSorrt(hero arr[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j].age > arr[j + 1].age)
			{
				hero temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
//打印数组
void printHeros(hero arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "姓名" << arr[i].name << " 性别：" << arr[i].sex << " 年龄：" << arr[i].age << endl;
	}
}
int main()
{
	struct hero arr[5] = {
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"},
	};
	int len = sizeof(arr) / sizeof(arr[0]);
	bubbleSorrt(arr, len);
	printHeros(arr, len);

	system("pause");
	return 0;

}