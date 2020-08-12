#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

bool compare(string a,string b){
	//if equal length then compare lexiographically
	if(a.length()==b.length()){
		return a<b;
	}

	//else compare on the basis of length
	return a.length()<b.length();
}

int main()
{
	string s[100];

	int i,n;
	cin>>n;

	cin.get();//to consume the newline we enter during input of n

	for(i=0;i<n;i++){
		getline(cin,s[i]);
	}

	sort(s,s+n,compare);

	for(i=0;i<n;i++){
		cout<<s[i]<<endl;
	}	
}