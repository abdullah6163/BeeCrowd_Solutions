#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t;
	while(t--){
		int n,s;
		cin>>n>>s;

		vector<int> v(n);
		for(auto &u:v)cin>>u;

		for(int i=0; i<n; i++){
			v[i]= abs(s-v[i]);
		}

		int m = min_element(v.begin(),v.end())-v.begin();
		cout<<m+1<<endl;
	}
}
