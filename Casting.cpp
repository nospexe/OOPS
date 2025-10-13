#include <iostream>

using namespace std;

class base
{
public:
	virtual void print()
	{
		cout << "Welcome from base class." << endl;
	};
};

class derived : public base
{
public:
	void print()
	{
		cout << "Welcome from derived class." << endl;
	};
};

int main()
{
	base ob;
	base *obptr;
	obptr = &ob;
	derived od;
	derived *odptr;
	odptr = &od;

	ob.print();		// base print
	od.print();		// derived print
	obptr->print(); // base print
	odptr->print(); // derived print
	// obptr = odptr; // obptr = (odptr*) obptr; // upcasting
	odptr = (derived*) obptr;
	obptr->print();

	return 0;
};