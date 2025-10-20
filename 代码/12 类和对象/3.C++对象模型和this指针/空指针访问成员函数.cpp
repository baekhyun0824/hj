#include<iostream>
using namespace std;


class person
{
public:
	void showclassname()
	{
		cout << "this is person class" << endl;
	}
	void showpersonage()
	{
		//报错原因是因为传入的指针为空
		if (this == NULL)
		{
			return;
		}
		cout << "age=" << m_age << endl;
	}
	int m_age;
};

void test01()
{
	person *p = NULL;

	p->showclassname();

	p->showpersonage();
}

int main()
{
	test01();
	return 0;
}