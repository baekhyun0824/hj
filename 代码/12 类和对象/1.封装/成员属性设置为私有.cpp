#include<iostream>
using namespace std;
#include<string>

//�ŵ�1������������Ϊ˽�У����Կ��ƶ�дȨ��
//�ŵ�2�����ڶ�дȨ�ޣ����ǿ��Լ��������Ч��
class person
{
public:
	//��������
	void setname(string name1)
	{
		name = name1;
	}
	//��ȡ����
	string getname()
	{
		return name;
	}
	//��ȡ����
	int getage()
	{
		return age;
	}
	//��������
	void setage(int age1)
	{
		if (age1 < 0 || age1>150)
		{
			cout << "�����������󣬸�ֵʧ��" << endl;
			return;
		}
		age = age1;
	}
	//����ż��
	void setidol(string idol1)
	{
		idol = idol1;
	}
private:
	string name;//���� �ɶ���д
	int age;//���� ֻ�� Ҳ����д����Ҫ�����������0~150֮��
	string idol;//ż�� ֻд

};
int main()
{
	person p;
	p.setname("����");
	cout << "������" << p.getname()<< endl;
	p.setage(24);
	cout << "���䣺" << p.getage() << endl;
	p.setidol("�߲���");

	return 0;
}