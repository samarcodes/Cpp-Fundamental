#include<iostream>
using namespace std;

int main()
{
	int n=6,i,j;

	for(i=1;i<=n;i++)
	{
			if(i%2!=0)
			{
				for(j=1;j<=i;j++)
					cout<<'1';
			}
			else
			{
				cout<<'1';

				for(j=0;j<i-2;j++)
					cout<<'0';

				cout<<'1';
			}
		cout<<'\n';
	}
}