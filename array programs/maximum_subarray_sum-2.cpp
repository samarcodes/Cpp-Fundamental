//cumulative sum approach
//O(n^2)
#include<iostream>

using namespace std;

int main()
{
	int a[]={-11,2,3,-4,-5,-6};
	int n=sizeof(a)/sizeof(int);

	int i,j;
	int *c_sum=new int[n];

	//finding cumulative sum
	c_sum[0]=a[0];
	for(i=1;i<n;i++)
	{
		c_sum[i]=c_sum[i-1] + a[i];
	}

	//finding max sum
	int max_sum=0;
	int current_sum;

	int left=-1;
	int right=-1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			current_sum=0;
		
			current_sum = c_sum[j] - c_sum[i-1];

			if(current_sum > max_sum)
			{
				left=i;
				right=j;
				max_sum = current_sum;
			}
		}
	}
	cout<<"max sum : "<<max_sum<<endl;
	for(i=left;i<=right;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}