#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s="FBFFBFFBFBFFBFFBFBFFBFFBF";
	string str;
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cin>>str;
		if(s.find(str)<s.length())
			cout<<"Yes"<<endl;
		else cout<<"No"<<endl;

	}
	
}