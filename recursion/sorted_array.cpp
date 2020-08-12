//modify it to work for both ascending and descending array
#include<iostream>

using namespace std;

bool isSorted(int a[],int n) {

	if(n==0 || n==1) {
		return true;
	}

	if(a[0]>a[1] && isSorted(a+1,n-1)) {
		return true;
	}
	return false;
}

int main() {
	int n;
	cin>>n;

	int a[n];
	int i;
	for(i=0;i<n;i++) {
		cin>>a[i];
	}

	if(isSorted(a,n)) {
		cout<<"true"<<endl;
	}
	else {
		cout<<"false"<<endl;
	}
}