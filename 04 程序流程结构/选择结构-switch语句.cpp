#include<iostream>
using namespace std;

int main() {

	//给电影评分
	//10~9经典
	//8~7非常好
	//6~5一般
	//5以下 烂片
	cout << "请给电影进行评分：" << endl;
	int score = 0;
	cin >> score;
	
	switch (score)
	{
	case 10:
	case 9:
		cout << "您认为是经典电影" << endl; break;
	case 8:
	case 7:
		cout << "您认为是非常好的电影" << endl; break;
	case 6:
	case 5:
		cout << "您认为是一般电影" << endl; break;
	default:
		cout << "您认为这是烂片" << endl; break;

	}
	//switch不可以用于判断区间
	system("pause");

	return 0;
}