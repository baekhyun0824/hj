//#include<iostream>
//using namespace std;
//#include<ctime>
//int main() {
//
//	//int num = 0;
//	//while (num < 10) 
//	//{
//	//	cout << num << endl;
//	//	num++;
//	//}
//
//	//案例 猜数字
//	//添加随机数种子 作用利用当前系统时间生成随机数，防止每次随机数都一样
//	srand((unsigned int)time(NULL));
//
//	int num = rand() % 100 + 1;//rand()%100生成0~99的随机数
//	int num1 = 0;
//	while (1)
//	{
//		cin >> num1;
//		if (num1 > num)
//		{
//			cout << "猜测过大" << endl;
//		}
//		else if (num1 < num)
//		{
//			cout << "猜测过小" << endl;
//		}
//		else
//		{
//			cout << "您猜对了" << endl;
//			break;//退出游戏
//		}
//	}
//
//	system("pause");
//
//	return 0;
//}