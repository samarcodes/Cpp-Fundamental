#include<iostream>

using namespace std;

//using temp array
//time : O(n)
//space : O(d)
void rotate1(int a[], int n, int k) {
	int temp[k];
	int i;

	for (i = 0; i < k; i++) {
		temp[i] = a[i];
	}

	for (i = k; i < n; i++) {
		a[i - k] = a[i];
	}

	int j = 0;
	for (i = n - k; i < n; i++) {
		a[i] = temp[j++];
	}
}

//rotating n times
//time : O(n*d)
//space : O(1)
void rotateleft(int arr[], int n) {
	int temp = arr[0];
	int i;
	for (i = 1; i < n; i++) {
		arr[i - 1] = arr[i];
	}
	arr[i - 1] = temp;
}

void rotate2(int arr[], int n, int k) {
	for (int i = 0; i < k; i++) {
		rotateleft(arr, n);
	}
}

//juggling algorithm
//time : O(n)
//space : O(1)
int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	else {
		return gcd(b, a % b);
	}
}

void rotate3(int arr[], int n, int k) {
	k %= n;
	if (k == 0)
		return;

	int g_c_d = gcd(n, k);
	int i;
	for (i = 0; i < g_c_d; i++) {
		int temp = arr[i];
		int j = i;
		while (1) {
			int d = j + k;

			if (d >= n) {
				d = d - n;
			}
			if (d == i)
				break;

			arr[j] = arr[d];
			j = d;
		}
		arr[j] = temp;
	}
}

int main() {
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int n = sizeof(arr) / sizeof(arr[0]);

	//rotate1(arr, n, 2);
	//rotate2(arr, n, 3);
	rotate3(arr, n, 5);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}