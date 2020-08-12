#include<iostream>

using namespace std;

int calSumUtil(int a[], int b[], int n, int m) {

	int i=n-1;
	int j=m-1;
	int k=n-1;
	int sum[n];
	int s=0,carry=0;
	while(j>=0) {
		s = a[i] + b[j] + carry;
		sum[k] = s%10; //last digit
		carry=s/10; //carry
		k--;
		i--;
		j--;
	}

	//if there are leftover elements in bigger array
	while(i>=0) {
		s= a[i] + carry;
		sum[k] = s%10;
		carry = s/10;
		k--;
		i--;
	}

	//leftover carry
	int ans=0;
	if(carry) {
		ans=carry;
	}

	for(i=0;i<n;i++) {
		ans=ans*10 + sum[i];
	}

	return ans;
}

int calSum(int a[], int b[], int n, int m) {
	if(n>m) {
		calSumUtil(a,b,n,m);
	}
	else {
		calSumUtil(b,a,m,n);
	}
}

int main() {

	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) {
		cin>>a[i];
	}

	int m;
	cin>>m;
	int b[m];
	for(int i=0;i<m;i++) {
		cin>>b[i];
	}

	cout<<calSum(a,b,n,m)<<endl;
	return 0;
}