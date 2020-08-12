#include<iostream>
using namespace std;

int fahrenheit_to_celcius(int f)
{
	int c=(5*(f-32))/9;//5/9 will lead to 0 so muliply 5 with f-32 first the divide it by 9
	return c;
}

int main()
{
	for(int f=0;f<=300;f+=20)
	{
		cout<<f<<'\t';
		cout<<fahrenheit_to_celcius(f)<<endl;
	}
	return 0;
}