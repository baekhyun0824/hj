#include<iostream>
using namespace std;

//�������ʱ�����Ժ���Ϊд��һ�𣬱�������

//���һ��Բ�࣬��Բ���ܳ�
//Բ����
const double pi = 3.14;

//class �������һ���࣬���������ŵľ���������
class Circle
{
	//����Ȩ��
	//����Ȩ��
public:
	
	//����
	//�뾶
	int m_r;
	
	//��Ϊ
	//��ȡԲ���ܳ�
	double calculateZC()
	{
		return 2 * pi*m_r;
	}
};

int main()
{
	//ͨ��Բ�� ���������Բ������
	Circle c1;
	//��Բ��������Խ��и�ֵ
	c1.m_r = 10;

	cout << "Բ���ܳ�Ϊ��" << c1.calculateZC() << endl;

	return 0;
}