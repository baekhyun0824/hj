#include<iostream>
using namespace std;

//��ӡ���ݺ���
void show(const int &val)
{
	//val = 1000;
	cout << "val=" << val << endl;
}


int main()
{
	//�������� ���������βΣ���ֹ�����
	
	//int &ref = 10;//��������һ��Ϸ����ڴ�ռ�
	//����const֮�� �������������޸�  int temp=10��const  int& ref = temp;
	const int & ref = 10;
	//ref = 10;//����const֮���Ϊֻ�����������޸�
	
	int a = 10;
	show(a);

	return 0;
}