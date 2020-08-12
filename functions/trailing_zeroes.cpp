//to find no of trailing zeroes in n! 
#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;

	int power=5;
	int ans=0;
	while(n/power>0)
	{
		ans+=n/power;
		power*=5;
	}
	cout<<ans<<endl;

	return 0;
}