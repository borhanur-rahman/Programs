#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,s1=0,s2=0,a;
		cin>>n;
		
		for(int i=0;i<n;i++)
		{
			cin>>a;
			if(a%2==0)
				s1=s1+a;
			else
				s2=s2+a;

		}
		if(s1>s2)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;



	}
	return 0;
}