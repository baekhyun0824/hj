#include<iostream>
using namespace std;

int main() {
	//1.����/����if���
	//�û���������������������600����Ϊ����һ����ѧ������Ļ�����
	/*int score = 0;
	cout << "������һ��������" << endl;
	cin >> score;
	cout << "������ķ�����" << score << endl;

	if (score > 600)
	{
		cout << "��������һ����ѧ������" << endl;
	}
	else
	{
		cout << "��δ����һ��������" << endl;
	}*/
	//2.��������if���
	/*int score = 0;
	cout << "������һ��������" << endl;
	cin >> score;
	cout << "������ķ�����" << score << endl;

	if (score > 600)
	{
		cout << "��������һ����ѧ������" << endl;
	}
	else if(score > 500)
	{
		cout << "�������˶�����ѧ������" << endl;
	}
	else if (score > 400)
	{
		cout << "��������������ѧ������" << endl;
	}
	else
	{
		cout << "��δ���ϴ�ѧ������" << endl;
	}*/
	//3.Ƕ��ʽif���
	int score = 0;
	cout << "������һ��������" << endl;
	cin >> score;
	cout << "������ķ�����" << score << endl;

	if (score > 600)
	{
		cout << "��������һ����ѧ������" << endl;
		if (score > 700) 
		{
			cout << "���������廪��ѧ������" << endl;
		}
		else if (score > 650)
		{
			cout << "�������˱����ѧ������" << endl;
		}
		else
		{
			cout << "�������������ѧ������" << endl;
		}
	}
	else if(score > 500)
	{
		cout << "�������˶�����ѧ������" << endl;
	}
	else if (score > 400)
	{
		cout << "��������������ѧ������" << endl;
	}
	else
	{
		cout << "��δ���ϴ�ѧ������" << endl;
	}

	system("pause");

	return 0;
}