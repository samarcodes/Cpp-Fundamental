#include<iostream>
	
using namespace std;

int power(int a,int b) {

	//base case
	if(b==0) {                      
		return 1;
	}

	//answer to small problem
	int small_ans=power(a,b-1);


	//anser to current problem
	return a * small_ans;
}

int fast_power(int a,int b) {
	//base case
	if(b==0) {
		return 1;
	}

	if(b%2==0) {
		return fast_power(a*a,b/2);
	}
	else {
		return a*fast_power(a*a,(b-1)/2);
	}
}

int main() {
	int a,b;
	cin>>a>>b;

	cout<<fast_power(a,b)<<endl;

	return 0;
}