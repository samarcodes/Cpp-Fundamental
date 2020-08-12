#include<iostream>

using namespace std;

void Rbubble_sort(int a[],int n) {

	//base case
	if(n==1) {
		return;
	}

	//rec case
	for(int i=0;i<=n-1;i++) {
		if(a[i]>a[i+1]) {
			swap(a[i],a[i+1]);
		}
	}
	Rbubble_sort(a,n-1);
}

void RRbubble_sort(int a[],int j,int n) {

	//base case
	if(n==1) {
		return;
	}

	if(j==n-1) {
		return RRbubble_sort(a,0,n-1);  //move to next iteration
	}

	if(a[j]>a[j+1]) {
		swap(a[j],a[j+1]);
	}
	RRbubble_sort(a,j+1,n); //same iteration, increment inner loop 
}

int main() {
	int a[]={4,5,2,3,1};
	int n=sizeof(a)/sizeof(int);

	RRbubble_sort(a,0,n);

	for(int i=0;i<n;i++) {
		cout<<a[i]<<" ";
	}
	cout<<endl;

	return 0;
}