#include<iostream>

using namespace std;

class A
{
public:
	//Method overloading
	void show() {
		cout << "Nothing entered" << endl;
	}
	void show(int a, int b) {
		cout << "You entered two numbers of int type" << endl;
	}
	void show(int a, int b, int c) {
		cout << "You entered three numbers of int type" << endl;
	}
};

int main() {
	A a;
	a.show();
	a.show(1, 2);
	a.show(1, 2, 3);

	return 0;
}