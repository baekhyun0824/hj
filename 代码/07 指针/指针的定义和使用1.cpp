#include<iostream>
using namespace std;

int main()
{

	//����ָ��
	int a = 10;
	//ָ��Ķ����﷨���������� *ָ���������
	//int * p;
	//p = &a;//ָ�������ֵ
	int * p = &a;//int *Ϊһ���������ͣ����Եȼ���������

	cout << "a��ֵΪ��" << &a << endl;
	cout << "ָ��pΪ��" << p << endl;
	//2.ʹ��ָ��
	//����ͨ��*����ָ�����ָ����ڴ�ռ�
	*p = 1000;
	cout << *p << endl;
	cout << a << endl;

	//3.ָ����ռ�õ��ڴ�ռ�
	cout << "sizof(int *)=" << sizeof(p) << endl;
	cout << "sizof(int *)=" << sizeof(int *) << endl;
	cout << "sizof(int *)=" << sizeof(char *) << endl;
	cout << "sizof(int *)=" << sizeof(float *) << endl;
	cout << "sizof(int *)=" << sizeof(double *) << endl;
	//��32λ����ϵͳ�£�ָ����ռ4���ֽڿռ��С������ʲô��������
	//��64λ����ϵͳ�£�ָ����ռ8���ֽڿռ��С

	system("pause");
	return 0;

}