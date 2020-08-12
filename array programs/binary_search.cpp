#include<iostream>

using namespace std;

int binary_search(int a[],int key,int low,int high)
{
	int mid_index;

	while(low<=high)
	{
		mid_index=(low+high)/2;

		if(key == a[mid_index])
			return mid_index;
		else if(key < a[mid_index])
			high=mid_index-1;
		else
			low=mid_index+1;
	}
	return -1;
}

int main()
{
	int a[]={1,3,5,7,9,10,55,100};
	int n=sizeof(a)/sizeof(int);

	int index=binary_search(a,3,0,n-1);

	index>=0 ? cout<<"found at index : "<<index<<endl : cout<<"Not Found"<<endl;

	return 0;
}