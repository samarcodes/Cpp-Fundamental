//find unique no from n unsorted elements using xor (without using array)
#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;

	int unique_no=0;
	int no;

	for(int i=0;i<n;i++)
	{
		cin>>no;
		unique_no^=no;
	}
	cout<<unique_no<<endl;
	return 0;
}