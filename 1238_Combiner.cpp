#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	while(n--){
		string s,t;
		cin>>s>>t;

		string ans="";
		int sz = s.size();
		int tz = t.size();
		int i;

		for(i=0; i<min(tz,sz); i++){

				ans+=s[i];
				ans+=t[i];

		}

		if(tz==sz){
			cout<<ans<<endl;
		}
		else if(tz>sz){
			cout<<ans<<t.substr(i,tz-sz)<<endl;
		}
		else{
			cout<<ans<<s.substr(i,sz-tz)<<endl;
		}

	}
}
