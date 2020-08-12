#include<iostream>

using namespace std;

int main()
{
	int a[]={2,5,7,10,11,12,13};
	int n=sizeof(a)/sizeof(int);

	int i=0;
	int j=n-1;

	int k=8;
	bool pair_found=false;
	while(i<j)
	{
		if(a[i]+a[j]==k)
		{
			pair_found=true;
			cout<<a[i]<<" "<<a[j]<<endl;
			i++;
			j--;
		}
		else if(a[i]+a[j] < k)
			i++;
		else if(a[i]+a[j] > k)
			j--;
	}
	if(!pair_found)
		cout<<"No pair Found with sum "<<k<<endl;

	return 0;
}