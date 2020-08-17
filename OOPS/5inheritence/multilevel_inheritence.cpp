#include<iostream>

using namespace std;

class A
{
public:
	void showA() {
		cout << "inside A" << endl;
	}
};

class B: public A
{
public:
	void showB() {
		cout << "inside B" << endl;
	}
};

class C: public B
{
public:
	void showC() {
		cout << "inside C" << endl;
	}
};

int main() {
	A a;
	B b;
	C c;

	a.showA();
	b.showA();
	b.showB();
	c.showA();
	c.showB();
	c.showC();
	return 0;
}