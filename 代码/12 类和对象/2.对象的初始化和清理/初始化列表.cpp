#include<iostream>
using namespace std;

//��ʼ���б�
//���캯������������1��ֵ1��������2��ֵ2��...{}
class person 
{
public:
	int A;
	int B;
	int C;
	//��ͳ��ʼ������
	/*person(int a, int b, int c)
	{
		A = a;
		B = b;
		C = c;
	}*/

	//��ʼ���б��ʼ��
	person(int a,int b,int c):A(a), B(b), C(c){}
};

void test01()
{
	//person p(1, 2, 3);
	person p(3,2,1);
	cout << "A=" << p.A << endl;
	cout << "B=" << p.B << endl;
	cout << "C=" << p.C << endl;
	
}
int main()
{
	test01();
	
	return 0;
}