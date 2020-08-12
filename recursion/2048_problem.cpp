#include<iostream>
#include<string>

using namespace std;

void print(int n) {
	static string s[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};

	//base case
	if(n==0) {
		return;
	}

	int last_digit=n%10;
	print(n/10);
	cout<<s[last_digit]<<" ";
}

int main() {
	int n;
	cin>>n;

	print(n);
	cout<<endl;

	return 0;
}