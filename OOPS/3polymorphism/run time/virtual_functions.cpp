#include<iostream>

using namespace std;

class A
{
public:
	virtual void show() {
		cout << "Class A" << endl;
	}
};

class B: public A
{
public:
	void show() {
		cout << "Class B" << endl;
	}
};

int main() {
	A *bptr, a;
	B b;
	bptr = &b;
	bptr->show();

	return 0;
}