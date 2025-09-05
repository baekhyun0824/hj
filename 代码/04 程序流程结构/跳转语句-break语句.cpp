#include<iostream>
using namespace std;

int main() {

	//1.Switch语句中
	cout << "请您选择副本难度：" << endl;
	int select = 0;
	cin >> select;
	switch (select)
	{
	case 1:
		cout << "普通" << endl; break;
	case 2:
		cout << "中等" << endl; break;
	default:
		cout << "困难" << endl; break;
	}
	//2.循环语句中
	for (int j = 0; j < 10; j++)
	{
		cout << j << endl;
		if (j == 5)
		{
			break;
		}
	}
	//3.嵌套语句中
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