//kadane's algo for maximum subarray sum
//O(n)
#include<iostream>

using namespace std;

int main()
{
	int a[]={-1,-2,3,4,-5,-6};
	int n=sizeof(a)/sizeof(int);

	int i;

	//finding max sum
	int ms=0;
	int cs=0;

	for(i=0;i<n;i++)
	{
		cs+=a[i];

		if(cs<0)
			cs=0;

		ms=max(cs,ms);
	}
	cout<<"max sum : "<<ms<<endl;

	return 0;
}