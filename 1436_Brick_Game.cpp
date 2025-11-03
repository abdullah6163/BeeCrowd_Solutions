#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t; cin>>t;
   int cs=0;
   while(t--){
	int n;
	cs++;
	cin>>n;
	vector<int> v(n);
	for(auto &u:v)cin>>u;

	int idx = (v.size()+1)/2;
	cout<<"Case "<<cs<<": "<<v[idx-1]<<endl;
   }
}
