#include<iostream>
using namespace std;

int main() {

	//����Ӱ����
	//10~9����
	//8~7�ǳ���
	//6~5һ��
	//5���� ��Ƭ
	cout << "�����Ӱ�������֣�" << endl;
	int score = 0;
	cin >> score;
	
	switch (score)
	{
	case 10:
	case 9:
		cout << "����Ϊ�Ǿ����Ӱ" << endl; break;
	case 8:
	case 7:
		cout << "����Ϊ�Ƿǳ��õĵ�Ӱ" << endl; break;
	case 6:
	case 5:
		cout << "����Ϊ��һ���Ӱ" << endl; break;
	default:
		cout << "����Ϊ������Ƭ" << endl; break;

	}
	//switch�����������ж�����
	system("pause");

	return 0;
}