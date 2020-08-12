#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;

	int i,j,value,space;
	for(i=1;i<=n;i++)
	{
		//spaces
		for(space=1;space<=n-i;space++)
			cout<<" ";
		
		//increasing numbers
		value=i;
		for(j=1;j<=i;j++)
		{
			cout<<value;
			value+=1;
		}

		//decreasing numbers
		value-=2;
		for(j=1;j<=i-1;j++)
		{
			cout<<value;
			value-=1;
		}
		cout<<endl;
	}
	return 0;
}