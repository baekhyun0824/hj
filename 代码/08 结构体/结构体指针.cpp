#include<iostream>
using namespace std;
#include<string>

struct Student
{
	string name;
	int age;
	int score;
};


int main()
{

	struct Student s1 ={ "����",18,100 };
	Student * p = &s1;
	//ָ��ͨ��->���ʽṹ��
	cout << "������" << p->name << " ���䣺" << p->age << " ������" << p->score << endl;

	system("pause");
	return 0;

}