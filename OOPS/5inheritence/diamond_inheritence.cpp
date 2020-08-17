#include<iostream>

using namespace std;

class A
{
public:
	void show() {
		cout << "Hello from A" << endl;
	}
};

class B: virtual public A
{

};

class C: virtual public A
{

};

class D: public B, public C
{

};

int main() {
	D d;
	d.show();
	return 0;
}