#include<iostream>
using namespace std;


//默认的访问权限不同
//struct默认是公共的public
//class 默认是私有的private

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