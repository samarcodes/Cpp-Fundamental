//O(n^3) not optimized
#include<iostream>

using namespace std;

int main()
{
	int a[]={-1,-2,3,4,5,-6};
	int n=sizeof(a)/sizeof(int);

	int i,j,k;

	int current_max;
	int max=0;

	int left=-1;
	int right=-1;
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			current_max=0;

			for(k=i;k<=j;k++)
				current_max+=a[k];

			if(current_max>max)
			{
				left=i;
				right=j;
				max=current_max;
			}
		}
	}
	cout<<"Maximum Sum : "<<max<<endl;
	for(i=left;i<=right;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}