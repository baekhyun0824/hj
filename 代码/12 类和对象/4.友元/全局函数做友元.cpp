#include<iostream>
#include<string>
using namespace std;

//��Ԫ������ʵ��
//ȫ�ֺ�������Ԫ
//������Ԫ
//��Ա��������Ԫ

//��Ԫ��Ŀ�ľ�����һ������������ ������һ������˽�г�Ա

class Building
{
	//���߱����� goodgayȫ�ֺ�����Building��ĺ����ѣ����Է������е�˽������
	friend void goodgay(Building *building);

public:
	Building()
	{
		this->m_sittingroom = "����";
		this->m_Bedroom = "����";
	}
	string m_sittingroom;  //����
private:
	string m_Bedroom;  //����
};

void goodgay(Building *building)
{
	cout << "�û������ڷ��ʣ�" << building->m_sittingroom << endl;
	cout << "�û������ڷ��ʣ�" << building->m_Bedroom << endl;
}

void test01()
{
	Building b;
	goodgay(&b);
}

int main()
{
	test01();
	return 0;
}