/*Deleting a derived class object using a pointer to a base class
 that has a non-virtual destructor results in undefined behavior.
 To correct this situation, the base class should be defined with
 a virtual destructor.*/

#include<iostream>

using namespace std;

class A
{
	int *a;
public:
	A(): a(new int[5] {1, 2, 3, 4, 5})
	{
		cout << "A constructor" << endl;
	}
	virtual void show() {
		for (int i = 0; i < 5; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
	}
	virtual ~A() {
		delete []a;
		cout << "A destructor" << endl;
	}
};

class B: public A
{
	int *b;
public:
	B(): b(new int[5] {6, 7, 8, 9, 10})
	{
		cout << "B constructor" << endl;
	}
	void show() {
		for (int i = 0; i < 5; i++) {
			cout << b[i] << " ";
		}
		cout << endl;
	}
	~B() {
		delete []b;
		cout << "B destructor" << endl;
	}
};

int main() {
	A *bptr;
	B *b = new B;
	bptr = b;
	bptr->show();
	delete bptr;

	return 0;
}