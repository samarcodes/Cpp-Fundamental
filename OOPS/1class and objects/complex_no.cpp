#include<iostream>

using namespace std;

class Complex
{
	int a;
	int b;

public:
	void set_data(int x, int y) {
		a = x;
		b = y;
	}

	void show_data() {
		cout << "a:" << a << endl;
		cout << "b:" << b << endl;
	}

	Complex add(Complex c) { //add functions takes Complex class as an argument and returns Complex class
		Complex temp;
		temp.a = a + c.a;
		temp.b = b + c.b;
		return temp;
	}
};

int main() {
	Complex c1;
	Complex c2;

	c1.set_data(2, 8);
	c2.set_data(8, 2);

	Complex c3 = c1.add(c2);
	c3.show_data();
}