#include<iostream>
using namespace std;
#include<string>

//����ѧ������ ��ѧ�����������������䣬������
//�Զ����������ͣ�һЩ���ͼ�����ɵ�һ������
//�﷨  struct  �������� { ��Ա�б� }
struct Student
{
	string name;
	int age;
	int score;
}s3;


int main()
{

	//��������1
	struct Student s1;//struct����ʡ��
	s1.name = "����";
	s1.age = 18;
	s1.score = 100;
	cout << "������" << s1.name << " ���䣺" << s1.age << " ������" << s1.score << endl;
	//��������2
	struct Student s2 = {"����",19,60};
	cout << "������" << s2.name << " ���䣺" << s2.age << " ������" << s2.score << endl;
	//��������3
	s3.name = "����";
	s3.age =20 ;
	s3.score = 99;
	cout << "������" << s3.name << " ���䣺" << s3.age << " ������" << s3.score << endl;
	
	system("pause");
	return 0;

}