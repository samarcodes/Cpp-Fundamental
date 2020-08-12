//generate prime numbers upto N
#include<iostream>

using namespace std;

bool isPrime(int n)
{
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
			return false;
	}
	return true;
}

void generate_prime(int N)
{
	for(int i=2;i<=N;i++)
	{
		if(isPrime(i))
			cout<<i<<" ";
	}
	cout<<endl;
}

using namespace std;

int main()
{
	int N;
	cin>>N;

	generate_prime(N);

	return 0;
}