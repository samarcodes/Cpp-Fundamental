#include<iostream>

using namespace std;

int main() {
	int a[3][6] = {{1, 2, 3, 4, 5, 6},
		{7, 8, 9, 10, 11, 12},
		{13, 14, 15, 16, 17, 18}
	};

	int row = 3;
	int col = 6;

	int i, j;
	int start_r = 0;
	int end_r = row - 1;
	int start_c = 0;
	int end_c = col - 1;

	while (start_r <= end_r && start_c <= end_c) {

		for (int i = start_c; i <= end_c; i++) {
			cout << a[start_r][i] << " ";
		}
		start_r++;

		for (int i = start_r; i <= end_r; i++) {
			cout << a[i][end_c] << " ";
		}
		end_c--;

		if (end_r >= start_r) {
			for (int i = end_c; i >= start_c; i--) {
				cout << a[end_r][i] << " ";
			}
			end_r--;
		}

		if (end_c >= start_c) {
			for (int i = end_r; i >= start_r; i--) {
				cout << a[i][start_c] << " ";
			}
			start_c++;
		}
	}
	cout << endl;
	return 0;
}