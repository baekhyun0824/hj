#include<iostream>
using namespace std;

int main() {
	//1.单行/多行if语句
	//用户输入分数，如果分数大于600，视为考上一本大学，在屏幕上输出
	/*int score = 0;
	cout << "请输入一个分数：" << endl;
	cin >> score;
	cout << "您输入的分数：" << score << endl;

	if (score > 600)
	{
		cout << "您考上了一本大学！！！" << endl;
	}
	else
	{
		cout << "您未考上一本！！！" << endl;
	}*/
	//2.多条件的if语句
	/*int score = 0;
	cout << "请输入一个分数：" << endl;
	cin >> score;
	cout << "您输入的分数：" << score << endl;

	if (score > 600)
	{
		cout << "您考上了一本大学！！！" << endl;
	}
	else if(score > 500)
	{
		cout << "您考上了二本大学！！！" << endl;
	}
	else if (score > 400)
	{
		cout << "您考上了三本大学！！！" << endl;
	}
	else
	{
		cout << "您未考上大学！！！" << endl;
	}*/
	//3.嵌套式if语句
	int score = 0;
	cout << "请输入一个分数：" << endl;
	cin >> score;
	cout << "您输入的分数：" << score << endl;

	if (score > 600)
	{
		cout << "您考上了一本大学！！！" << endl;
		if (score > 700) 
		{
			cout << "您考上了清华大学！！！" << endl;
		}
		else if (score > 650)
		{
			cout << "您考上了北大大学！！！" << endl;
		}
		else
		{
			cout << "您考上了人民大学！！！" << endl;
		}
	}
	else if(score > 500)
	{
		cout << "您考上了二本大学！！！" << endl;
	}
	else if (score > 400)
	{
		cout << "您考上了三本大学！！！" << endl;
	}
	else
	{
		cout << "您未考上大学！！！" << endl;
	}

	system("pause");

	return 0;
}