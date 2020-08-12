#include<iostream>
#include<string>

using namespace std;

int main()
{
	//intialization types
	string s0("hello");
	string s1 = "Hello World!";
	string s2(s1); //or can use s2=s1
	char a[]="samar";
	string s3(a);//initialized with char array

	cout<<s0<<endl;
	cout<<s1<<endl;
	cout<<s2<<endl;
	cout<<s3<<endl;

	//empty function
	if(s0.empty())
		cout<<"Empty"<<endl;
	else
		cout<<"Not Empty"<<endl;

	//append function
	s3.append("kalra");
	cout<<s3<<endl;

	//clear() for making it empty

	//length() tpo cal length of string

	//compare() to compare two strings

	//for comparisions we can also use < > (overloaded)

	//we can use it as an array a[1]

	//find() to get a substring

	//erase(starting index, length of word) to erase  a particular word in a string

	//
	return 0;
}