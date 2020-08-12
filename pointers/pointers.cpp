//pointers 
//&(reference operator)
//*(dereference operator)
#include<iostream>

using namespace std;

int main(){
	int x=10;
	int *ptr=&x;

	cout<<x<<endl;      //10
	cout<<&x<<endl;     //add. of x
	cout<<ptr<<endl;    //add. of x
	cout<<&ptr<<endl;   //add. of ptr
	cout<<*ptr<<endl;   //value at(add of x)

	cout<<*(&ptr)<<endl;//add of x  (& ans * cancel out each other always)
	cout<<&(*ptr)<<endl;//add of x  (& and * cancel out each other always)

	return 0;
}