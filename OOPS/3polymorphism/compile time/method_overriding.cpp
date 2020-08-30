#include<iostream>

using namespace std;

class car
{
public:
	void changeGear() {
		cout << "changing gear for car" << endl;
	}
};

class sportsCar: public car
{
public:
	//method overriden
	void changeGear() {
		cout << "changing gear for sports car" << endl;
	}
};

int main() {
	car c;
	sportsCar sc;
	sc.changeGear();

	return 0;
}