#include<iostream>
using namespace std;

////��̬��Ա����
//class person
//{
//public:
//	//���ж��󶼹���ͬһ������
//	//����׶ξͷ����ڴ�
//	//���������������ʼ������
//	static int A;
//
//	//��̬��Ա����Ҳ���з���Ȩ�޵�
//private:
//	static int B;
//
//};
//int person::A = 100;
//int person::B = 200;
////void test01()
////{
////	person p;
////	cout << p.A << endl;
////	person p2;
////	p2.A = 200;
////	cout << p2.A << endl;
////}
//void test02()
//{
//	//��̬��Ա���� ������ĳ�������ϣ����ж��󶼹���ͬһ������
//	//��˾�̬��Ա���������ַ��ʷ�ʽ
//	//1��ͨ��������з���
//	//person p;
//	//cout << p.A << endl;
//	//2��ͨ���������з���
//	cout << person::A << endl;
//	////cout << person::B << endl;//������ʲ���˽�о�̬��Ա����
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}

//��̬��Ա����
//���ж�����ͬһ������
//��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
class person
{
public :
	static void func()
	{
		A = 100;
		//B = 200;//�Ǿ�̬��Ա���������Է���
		cout << "static void func����" << endl;
	}
	static int A;
	int B;
};
int person::A = 0;
void test01()
{
	//1��ͨ���������
	person p;
	p.func();

	//2��ͨ����������
	person::func();
}
int main()
{
	test01();
	return 0;
}