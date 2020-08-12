#include<iostream>

using namespace std;

void bubble_sort(int a[],int n)
{
	int itr,i;
	bool flag;
	for(itr=1;itr<=n-1;itr++)
	{
		flag=false;
		for(i=0;i<=n-1-itr;i++)
		{
			if(a[i]>a[i+1])
			{
				flag=true;
				swap(a[i],a[i+1]);
			}
		}
		if(flag==false)
			return;
	}
}

void selection_sort(int a[],int n)
{
	int i,j;
	int min;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
				min=j;
		}
		swap(a[i],a[min]);
	}
}

void insertion_sort(int a[],int n)
{
	int temp;
	int i,j;
	for(i=1;i<n;i++)
	{
		temp=a[i];
		for(j=i-1;j>=0 && temp<a[j];j--)
		{
			a[j+1]=a[j];
		}
		a[j+1]=temp;
	}
}

int main()
{
	int a[]={10,8,6,4,2,0};
	int n=sizeof(a)/sizeof(int);

	insertion_sort(a,n);

	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;

	return 0;
}