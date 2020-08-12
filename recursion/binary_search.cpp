#include<iostream>
	
using namespace std;

int binarySearch(int a[],int s,int e,int key) {
	if(s>e) {
		return -1;
	}

	int mid=(s+e)/2;

	if(a[mid]==key) {
		return mid;
	}
	else if(key<a[mid]) {
		binarySearch(a,0,mid-1,key);
	}
	else {
		binarySearch(a,mid+1,e,key);
	}
}

int main() {
	int n;
	cin>>n;

	int a[n];
	int i;
	for(i=0;i<n;i++) {
		cin>>a[i];
	}

	int key;
	cin>>key;

	cout<<binarySearch(a,0,n-1,key)<<endl;

	return 0;
}