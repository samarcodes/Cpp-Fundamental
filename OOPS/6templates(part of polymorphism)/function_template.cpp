//making add function generalize so that it can accept int, float, double

#include<iostream>

using namespace std;

template <class T>
T add(T x, T y) {
	return x + y;
}

int main() {
	cout << add(10.5, 100.567) << endl;
}