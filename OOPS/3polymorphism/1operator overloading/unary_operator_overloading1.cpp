//unary operator overloading

#include<iostream>
#include<cstdlib>

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
	Complex operator-() {
		Complex temp;
		temp.a = -a;
		temp.b = -b;
		return temp;
	}
	Complex operator++() {
		Complex temp;
		temp.a = ++a;
		temp.b = ++b;

		return temp;
	}
	Complex operator++(int) { //dummy parameter helps in identifying compiler that this is for post-oncrement
		Complex temp;
		temp.a = a++;
		temp.b = b++;

		return temp;
	}
	void show() {
		cout << a << " " << b << endl;
	}
};

int main() {
	Complex c1(10, 20);
	c1.show();

	Complex c2 = c1++;
	c1.show();
	c2.show();

	return 0;
}