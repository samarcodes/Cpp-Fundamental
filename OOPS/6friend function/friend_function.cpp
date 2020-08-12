#include<iostream>

using namespace std;

class Complex
{
	int a;
	int b;

public:
	Complex() {}
	Complex(int x, int y) {
		a = x;
		b = y;
	}
	void show() {
		cout << a << " " << b << endl;
	}
	friend Complex operator+ (Complex, Complex);
	friend Complex operator++ (Complex &);
	friend Complex operator++ (Complex &, int);
	friend ostream& operator<< (ostream &, Complex);
	friend istream& operator>> (istream &, Complex &);
};

Complex operator+ (Complex x, Complex y) {
	Complex temp;
	temp.a = x.a + y.a;
	temp.b = x.b + y.b;
	return temp;
}

Complex operator++(Complex &c) {//defining it outside the class
	Complex temp;
	temp.a = ++c.a; //here we can access private members of c1 & c2
	temp.b = ++c.b;
	return temp;
}
Complex operator++(Complex &c, int dummy) {
	Complex temp;
	temp.a = c.a++;
	temp.b = c.b++;
	return temp;
}

ostream& operator<< (ostream &dout, Complex c) {
	cout << c.a << " " << c.b;
	return dout;
}
istream& operator>> (istream &din, Complex &c) {
	cin >> c.a >> c.b;
	return din;
}

int main() {
	Complex c1(10, 20);
	Complex c2(30, 40);

	Complex c3;
	cin >> c3;

	cout << c1 << endl;
	cout << c2 << endl;
	cout << c3 << endl;
	return 0;
}