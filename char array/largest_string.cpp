#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	char current[100];
	char largest[100];

	int n;
	cin>>n;

	cin>>largest;
	for(int i=0;i<n-1;i++)
	{
		cin>>current;
		if(strlen(current) > strlen(largest))
			strcpy(largest,current);
	}

	cout<<largest<<" "<<strlen(largest)<<endl;

	return 0;
}