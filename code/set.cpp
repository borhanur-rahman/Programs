#include<bits/stdc++.h>
using namespace std;
void print(set<string>s)
{
	for (string value:s)
		cout<<value<<endl;
}
int main()
{

	unordered_set<string>s;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		string str;
		cin>>str;
		s.insert(str);
	}
	int k;
	cin>>k;
	while(k--)
	{
		string key;
		cin>>key;
		if(s.find(key)==s.end())
			cout<<"No"<<endl;
		else
			cout<<"Yes"<<endl;

	}

}