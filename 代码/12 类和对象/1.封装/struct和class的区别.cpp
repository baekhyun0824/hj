#include<iostream>
using namespace std;


//Ĭ�ϵķ���Ȩ�޲�ͬ
//structĬ���ǹ�����public
//class Ĭ����˽�е�private

class c1
{
	int m;
};
struct c2
{
	int n;
};
int main()
{
	c1 a;
	a.m = 10;
	c2 b;
	b.n = 10;

	return 0;
}