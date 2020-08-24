#include<iostream>

using namespace std;

class A
{
	int *arr;
public:
	A(): arr(new int[5] {1, 2, 3, 4, 5}) //dynamic constructor
	{

	}
	void show() {
		for (int i = 0; i < 5; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}

	~A() { // destructor to destroy the dynamically allocated array
		delete []arr;
	}
};

int main() {
	A a;
	a.show();

	return 0;
}