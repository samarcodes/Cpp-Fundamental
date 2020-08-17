#include<iostream>

using namespace std;

int multiply(int result[], int x, int result_size) {
	int prod;
	int carry = 0;

	for (int i = 0; i < result_size; i++) {
		prod = result[i] * x + carry;
		result[i] = prod % 10;
		carry = prod / 10;
	}

	while (carry) {
		result[result_size] = carry % 10;
		carry /= 10;
		result_size++;
	}
	return result_size;
}

void factorial(int n) {
	int result[1500] = {0};

	result[0] = 1;
	int result_size = 1;

	for (int i = 2; i <= n; i++) {
		result_size = multiply(result, i, result_size);
	}

	for (int i = result_size - 1; i >= 0; i--) {
		cout << result[i];
	}
	cout << endl;
}

int main() {
	int n;
	cin >> n;

	factorial(n);

	return 0;
}