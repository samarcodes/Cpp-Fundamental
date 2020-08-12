#include <iostream>

using namespace std;

void towerOfHanoi(int n, char src, char dest, char helper) {

	//base case
	if(n==0) {
		return;
	}

	towerOfHanoi(n-1,src,helper,dest);

	cout<<"move disk "<<n<<" from "<<src<<" to "<<dest<<endl;

	towerOfHanoi(n-1,helper,dest,src);
}

int main() {
	int n;
	cin>>n;

	towerOfHanoi(n,'A','C','B');

	return 0;
}