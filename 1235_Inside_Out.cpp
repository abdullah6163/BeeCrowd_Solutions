#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	cin.ignore();

	while(n--){
		string s;
		getline(cin,s);

		int sz = s.size()/2;

		string s1=s.substr(0,sz);
		reverse(s1.begin(),s1.end());

		string s2 = s.substr(sz,s.size());
		reverse(s2.begin(),s2.end());

		cout<<s1<<s2<<endl;
	}
}
