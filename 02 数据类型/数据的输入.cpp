#include<iostream>
using namespace std;
#include<string>

int main() {
	//����ͬʱ��ע�ͷ���Ctrl+k+c

	//����
	int a = 0;
	cout << "������ͱ���a��ֵ��" << endl;
	cin >> a;
	cout << "����a=" << a << endl;

	//������
	float f = 3.14f;
	cout << "��������ͱ���f��ֵ��" << endl;
	cin >> f;
	cout << "�����ͱ���f=" << f << endl;

	//�ַ���
	float ch = 'a';
	cout << "����ַ��ͱ���ch��ֵ��" << endl;
	cin >> ch;
	cout << "�ַ���ch=" << ch << endl;

	//�ַ�����
	string str ;
	cout << "����ַ����ͱ���str��ֵ��" << endl;
	cin >> str;
	cout << "�ַ�����str=" << str << endl;

	//��������
	bool flag = false;//true������
	cout << "����������ͱ���flag��ֵ��" << endl;
	cin >> flag;
	cout << "��������flag=" << flag << endl;

	system("pause");

	return 0;
}