#include<iostream>
using namespace std;
#include<string>

struct hero
{
	string name;
	int age;
	string sex;
};
//ð��������  ����1 ������׵�ַ  ����2  ���鳤��
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
//��ӡ����
void printHeros(hero arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "����" << arr[i].name << " �Ա�" << arr[i].sex << " ���䣺" << arr[i].age << endl;
	}
}
int main()
{
	struct hero arr[5] = {
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"},
	};
	int len = sizeof(arr) / sizeof(arr[0]);
	bubbleSorrt(arr, len);
	printHeros(arr, len);

	system("pause");
	return 0;

}