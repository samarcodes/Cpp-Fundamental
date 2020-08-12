#include<iostream>

using namespace std;

int main()
{
	int a[]={1,2,3,4,5,6};
	int n=sizeof(a)/sizeof(int);

	int i,j,k;
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			for(k=i;k<=j;k++)
				cout<<a[k]<<",";
			cout<<endl;
		}
	}

	return 0;
}