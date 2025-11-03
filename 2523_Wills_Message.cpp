#include<bits/stdc++.h>
using namespace std;

int main(){

	string s;
	while(cin>>s){

		int n;
		cin>>n;

		vector<int> v(n);
		for(auto &u:v) cin>>u;

		string ans = "";
		for(int i=0; i<v.size(); i++){
			ans+= s[v[i]-1];
		}

		cout<<ans<<endl;
	}







}
