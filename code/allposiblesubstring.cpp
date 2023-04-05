#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	for (int i = 0; i < s.length(); i++)
        for (int len = 1; len <= s.length() - i; len++)
            cout << s.substr(i, len) << endl;
}