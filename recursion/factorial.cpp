#include<iostream>
	
using namespace std;

int factorial(int n) {

	//base case
	if(n==0) {                      
		return 1;
	}

	//answer to small problem
	int small_ans=factorial(n-1);

	//anser to current problem
	return n * small_ans;
}

int main() {
	int n;
	cin>>n;

	cout<<factorial(n)<<endl;

	return 0;
}