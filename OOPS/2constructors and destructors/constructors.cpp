//no constructor in class => compiler(default, copy)
//default, parameterised => compiler(copy)
//copy => compiler(no constructor)

#include<iostream>

using namespace std;

class Complex
{
	int a;
	int b;
	int *p;

public:
	Complex(): a(0), b(0), p(NULL) //Default Constructor
	{}
	Complex(int x, int y, int z): a(x), b(y), p(&z) //Parameterised Constructor
	{}
	Complex(const Complex &c) { //Copy Constructor
		a = c.a;
		b = c.b;
		p = new int;
		*p = *(c.p);  //copying prev object p value to current object p
	}

	~Complex () { //Destructor (the last function called before object deletion)
		delete p;
	}

	void show() {
		cout << a << " " << b << " " << p << endl;
	}
	void change(int x) {
		a = x;
	}
};

int main() {
	Complex c1(10, 20, 30);
	c1.show();

	Complex c2(c1);
	c2.show();

	return 0;
}