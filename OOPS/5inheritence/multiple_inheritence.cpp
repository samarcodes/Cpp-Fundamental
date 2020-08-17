#include<iostream>

using namespace std;

class Car
{
public:
	void showCar() {
		cout << "Inside Car" << endl;
	}
};

class Bus
{
public:
	void showBus() {
		cout << "Inside Bus" << endl;
	}
};

class Vechile: public Car, public Bus
{
public:
	void showVechile() {
		cout << "Inside Vechile" << endl;
	}
};

int main() {
	Vechile v;
	v.showVechile();
	v.showBus();
	v.showCar();
	return 0;
}