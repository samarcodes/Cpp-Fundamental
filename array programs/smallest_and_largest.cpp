#include<iostream>
#include<climits>

using namespace std;

int main()
{
	int n;
	cin>>n;

	int no;
	int max=INT_MIN;
	int min=INT_MAX;
	for(int i=0;i<n;i++)
	{
		cin>>no;

		if(no>max)
			max=no;
		if(no<min)
			min=no;
	}
	cout<<min<<" "<<max<<endl;

	return 0;
}