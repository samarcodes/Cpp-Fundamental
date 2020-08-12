#include<iostream>
	
using namespace std;

//0 1 1 2 3 5 8 13 21 .....

int fibonacci(int n) {

	//base case
	if(n==0 || n==1) {                      
		return n;
	}

	//answer to small problem
	int f1=fibonacci(n-1);
	int f2=fibonacci(n-2);


	//anser to current problem
	return f1+f2;
}

int main() {
	int n;
	cin>>n;

	cout<<fibonacci(n)<<endl;

	return 0;
}