#include<iostream>
using namespace std;

int main() {

	//1.Switch�����
	cout << "����ѡ�񸱱��Ѷȣ�" << endl;
	int select = 0;
	cin >> select;
	switch (select)
	{
	case 1:
		cout << "��ͨ" << endl; break;
	case 2:
		cout << "�е�" << endl; break;
	default:
		cout << "����" << endl; break;
	}
	//2.ѭ�������
	for (int j = 0; j < 10; j++)
	{
		cout << j << endl;
		if (j == 5)
		{
			break;
		}
	}
	//3.Ƕ�������
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++) 
		{
					cout << "* " ;
					if (j == 5)
					{
						break;
					}
		}
				cout << "\n" ;
	}

	system("pause");

	return 0;
}