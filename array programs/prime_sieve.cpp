#include<iostream>

using namespace std;

void prime_sieve(int a[]) {
	
	//mark all odd no as prime
	for(int no=3;no<=1000000;no+=2) {
		a[no]=1;
	}

	//sieve
	for(long long no=3;no<=1000000;no+=2) {
		//if current no is marked(it means it is prime) so mark its multiples as not prime
		if(a[no]==1) {
			for(long long j=no*no;j<=1000000;j+=no) {
				a[j]=0;
			}
		}
	}

	//special cases
	a[1]=a[0]=0;
	a[2]=1;
}

int main() {
	int p[1000005]={0};
	prime_sieve(p);

	int csum[1000005]={0};

	for(int i=1;i<=1000000;i++) {
		csum[i] = csum[i-1] + p[i];
	}

	int q;
	cin>>q;

	while(q--) {
		int a,b;
		cin >> a >> b;
		cout<< csum[b] - csum[a-1] <<endl;
	}

	return 0;
}