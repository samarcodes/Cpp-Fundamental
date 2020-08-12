//max sum of subarray in circular array
//eg 1 2 -3 -4 5
//ans is 5 + 1 + 2 = 8 

#include<iostream>
using namespace std;
int main() {
	int t;
	cin>>t;

	int n,i,j;
	while(t--){
		cin>>n;
		int a[n];

		for(i=0;i<n;i++){
			cin>>a[i];
		}

		int cs=0;
		int ms=0;
		for(i=0;i<n;i++){
			j=i;
			cs=0;
			do{
				cs+=a[j];

				if(cs<0){
					cs=0;
				}

				ms=max(cs,ms);
				j=(j+1)%n;
			}while(j!=i);
		}
		cout<<ms<<endl;
	}
	return 0;
}