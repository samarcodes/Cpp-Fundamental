#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

void shuffle(int a[], int low, int high) {
	srand(time(NULL));

	for(int i=high;i>0;i--) {
		int random=rand()%(high-low+1);
		swap(a[random],a[i]);
	}
}

int partition(int a[], int low, int high) {
	int i=low-1;
	int j=low;

	for(;j<high;j++) {
		if(a[j] < a[high]) {
			i++;
			swap(a[i],a[j]);
		}
	}
	swap(a[i+1],a[high]);

	return i+1;
}

void quick_sort(int a[], int low, int high) {

	if(low > high) {
		return;
	}

	int pivot = partition(a,low,high);

	quick_sort(a,low,pivot-1);
	quick_sort(a,pivot+1,high);
}

int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) {
		cin>>a[i];
	}

	shuffle(a,0,n-1);
	for(int i=0;i<n;i++) {
		cout<<a[i]<<" ";
	}
	cout<<endl;
	quick_sort(a,0,n-1);
	for(int i=0;i<n;i++) {
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}