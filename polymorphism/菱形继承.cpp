#include <iostream>
using namespace std;
class base
{
	virtual void func()
	{
		cout << "base" << endl;
	}
	virtual void funcbase()
	{
		cout << "funcbase" << endl;

	}
};
class base1 :public base
{
	virtual void func()
	{
		cout << "base1" << endl;

	}
	virtual void funbase1()
	{
		cout << "funbase1" << endl;
	}
};
class base2 :public base
{
	virtual void func()
	{
		cout << "base2" << endl;

	}
	virtual void funcbase2()
	{
		cout << "funcbase2" << endl;

	}
};
class son :public base1, public base2
{
	virtual void func()
	{
		cout << "son" << endl;
	}
	virtual void funcson()
	{
		cout << "funcson" << endl;
	}
};
int mainkfgjy()
{
	base grandfarth;
	base1 farth1;
	base2 farth2;
	son Son;
	system("pause");
	return 0;
}