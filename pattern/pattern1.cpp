#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;

	for(int i=1;i<=n;i++)
	{
		int value= i%2==0 ? 0 : 1;//decide starting value acc to row
		for(int j=1;j<=i;j++)
		{
			cout<<value;
			value=1-value;//alternate bw 0 and 1
		}
		cout<<endl;
	}

	return 0;
}