#include<iostream>
using namespace std;

//��Ա�����ͳ�Ա�����Ƿֿ��洢��

class person
{
	int a;//�Ǿ�̬��Ա���� ������Ķ�����

	static int b;//��̬��Ա���� �������������

	void func(){}//�Ǿ�̬��Ա���� �������������

	static void func2(){}//��̬��Ա���� �������������
	
};
int person::b = 0;

void test01()
{
	person p;
	//C++���������ÿ���ն���Ҳ����һ���ֽڿռ䣬��Ϊ�����ֿն���ռ�ڴ��λ��
	//ÿ���ն���ҲӦ����һ����һ�޶����ڴ��ַ
	cout << "sizeof p=" << sizeof(p) << endl;
}
void test02()
{
	person p;
	cout << "sizeof p=" << sizeof(p) << endl;
}

int main()
{
	test01();
	test02();
	return 0;

}