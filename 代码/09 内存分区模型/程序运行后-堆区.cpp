#include<iostream>
using namespace std;

//�����������ɳ���Ա�����ͷ�

int * func()//�β�����Ҳ�����ջ��
{
	//����new�ؼ���  ���Խ����ݿ��ٵ�����
	//ָ�뱾��Ҳ��һ���ֲ�����������ջ�ϣ�ָ�뱣��������Ƿ��ڶ���
	int *a = new int(10);
	return a;
}
int main()
{
	//����func�ķ���ֵ
	int *p = func();

	cout << *p << endl;//��һ�ο��Դ�ӡ��ȷ�����֣�����Ϊ���������˱���
	cout << *p << endl;//�ڶ���������ݾͲ��ڱ�����
	  
	//delete�ͷŶ�������	
	delete p;
	//cout << *p << endl;//�����ͷŵĿռ䲻�ɷ���
	return 0;
}