#include<iostream>
using namespace std;
#include<string>

//�﷨  struct  �ṹ����  ������[Ԫ�ظ���]={ {}��{}��... }
struct Student
{
	string name;
	int age;
	int score;
};


int main()
{

	//��������1
	struct Student arr[3]=
	{
		{ "����",18,100},
		{ "����",19,60 },
		{ "����",20,99 }

	};
	arr[2].name = "����";
	arr[2].age = 23;
	arr[2].score =99;

	for (int i = 0; i < 3; i++)
	{
		cout << "������" << arr[i].name << " ���䣺" << arr[i].age << " ������" << arr[i].score << endl;
	}
	
	system("pause");
	return 0;

}