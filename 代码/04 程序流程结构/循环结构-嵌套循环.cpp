#include<iostream>
using namespace std;

int main() {

	/*for(int i=0;i<10;i++)
	{
		for (int j = 0; j < 10; j++) 
		{
			cout << "* " ;
		}
		cout << "\n" ;
	} */

	//���� �˷��ھ���

	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j <=i; j++)
		{
			cout << j << " * " << i << " = " << i * j <<"  ";
		}
		cout << "\n";
	}

	system("pause");

	return 0;
}