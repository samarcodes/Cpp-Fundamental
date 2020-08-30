//friend function

#include<iostream>

using namespace std;

class Complex
{
	int real;
	int imag;

public:
	Complex(): real(0), imag(0)
	{}
	Complex(int x, int y): real(x), imag(y)
	{}
	//declared inside class
	friend Complex operator-(const Complex&); //unary -
	friend Complex operator+(const Complex&); //unary +
	friend Complex operator++(Complex&);  //pre increment
	friend Complex operator++(Complex&, int); //post increment
	friend Complex operator+(const Complex&, const Complex&); //binary +
	friend Complex operator-(const Complex&, const Complex&); //binary -
	friend istream& operator>>(istream&, Complex&);
	friend ostream& operator<<(ostream&, const Complex&);
	void show() {
		cout << real << " " << imag << endl;
	}
};

//defined outside class

Complex operator-(const Complex &c) {
	Complex temp;
	temp.real = -c.real;
	temp.imag = -c.imag;
	return temp;
}

Complex operator+(const Complex &c) {
	Complex temp;
	temp.real = abs(c.real);
	temp.imag = abs(c.imag);
	return temp;
}

Complex operator++(Complex &c) {
	Complex temp;
	temp.real = ++c.real;
	temp.imag = ++c.imag;
	return temp;
}

Complex operator++(Complex &c, int dummy) {
	Complex temp;
	temp.real = c.real++;
	temp.imag = c.imag++;
	return temp;
}

Complex operator+(const Complex &a, const Complex &b) {
	Complex temp;
	temp.real = a.real + b.real;
	temp.imag = a.imag + b.imag;
	return temp;
}

Complex operator-(const Complex &a, const Complex &b) {
	Complex temp;
	temp.real = a.real - b.real;
	temp.imag = a.imag - b.imag;
	return temp;
}

istream& operator>>(istream& din, Complex& c) {
	cout << "Enter real value : ";
	cin >> c.real;
	cout << "Enter imaginary value : ";
	cin >> c.imag;
	return din;
}

ostream& operator<<(ostream& din, const Complex& c) {
	cout << c.real << " " << c.imag;
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