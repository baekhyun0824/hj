#include<iostream>
using namespace std;

int main() {

	//1.continue跳过本次循环，执行下一次
	//for (int j = 0; j < 100; j++)
	//{
	//	//奇数输出，偶数不输出
	//	if (j %2==0)
	//	{
	//		continue;
	//	}
	//	cout << j << endl;
	//}
	//2.goto语句
	
	cout << "1" <<endl;
	goto flag;
	cout << "2" << endl;
	cout << "3" << endl;
	cout << "4" << endl;
flag:
	cout << "5" << endl;

	system("pause");

	return 0;
}