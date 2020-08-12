#include<iostream>

using namespace std;

int main()
{
	float n=21;
	float sr=0;

	while(true)
	{
		if(sr*sr<=n)
			sr+=1;
		else
		{
			sr-=1;
			break;
		}
	}

	while(true)
	{
		if(sr*sr<=n)
			sr+=0.1;
		else
		{
			sr-=0.1;
			break;
		}
	}

	while(true)
	{
		if(sr*sr<=n)
			sr+=0.01;
		else
		{
			sr-=0.01;
			break;
		}
	}

	while(true)
	{
		if(sr*sr<=n)
			sr+=0.001;
		else
		{
			sr-=0.001;
			break;
		}
	}

	cout<<sr<<endl;

	return 0;
}