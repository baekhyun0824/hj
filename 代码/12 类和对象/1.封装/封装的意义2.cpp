#include<iostream>
using namespace std;

//�������ʱ�����԰����Ժ���Ϊ���ڲ�ͬ��Ȩ���£����Կ���
//����Ȩ�ޣ�
//1������Ȩ�� public       ��Ա���ڿ��Է��ʣ�������Է���
//2������Ȩ�� protected    ��Ա���ڿ��Է��ʣ����ⲻ���Է���
//3��˽��Ȩ�� private      ��Ա���ڿ��Է��ʣ����ⲻ���Է���

class person
{
public:
	string name;
protected:
	string car;
private:
	int password;

public:
	void func()
	{
		name = "�߲���";
		car = "��ɯ����";
		password = 920506;
	}
};
int main()
{
	person p;
	p.name = "����";
	//p.car = "С��¿";//����Ȩ��������ʲ���
	//p.password = 123456;//��˽Ȩ��������ʲ���
	person p1;
	p1.func();

	return 0;
}