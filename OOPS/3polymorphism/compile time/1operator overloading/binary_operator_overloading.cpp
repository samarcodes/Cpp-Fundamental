//binary operator overloading

#include<iostream>
#include<string.h>

using namespace std;

class Complex
{
	int a;
	int b;

public:
	Complex() {
		a = 0;
		b = 0;
	}
	Complex(int x, int y) {
		a = x;
		b = y;
	}
	Complex operator+ (const Complex &c) {
		Complex temp;
		temp.a = a + c.a;
		temp.b = b + c.b;
		return temp;
	}
	Complex operator- (const Complex &c) {
		Complex temp;
		temp.a = a + c.a;
		temp.b = b + c.b;
		return temp;
	}
	void show() {
		cout << a << " " << b << endl;
	}
};

int main() {
	Complex c1(10, 20);
	c1.show();

	Complex c2(30, 40);
	c2.show();

	Complex c3 = c1 + c2;
	c3.show();
}