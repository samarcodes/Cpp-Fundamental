//double pointer (pointer to pointer)

#include<iostream>

using namespace std;

int main(){
	int x=10;           //integer variable

	int *ptr=&x;        //pointer to integer variable 

	int **dptr=&ptr;    //pointer to pointer that points to integer variable

	cout<<x<<endl;      //10
	cout<<&x<<endl;     //add. of x

	cout<<ptr<<endl;    //add. of x
	cout<<&ptr<<endl;   //add. of ptr
	cout<<*ptr<<endl;   //value at(add of x)

	cout<<dptr<<endl;   //add. of ptr
	cout<<*dptr<<endl;  //add. of x
	cout<<**dptr<<endl; //10
	cout<<&dptr<<endl;  //add. of dptr


	return 0;
}