#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b;
	while(cin>>a>>b){

		vector<int> v(a);
		for(auto &u:v)cin>>u;
		sort(v.rbegin(),v.rend());

		for(int i=0; i<b; i++){
			int n;
			cin>>n;
			cout<<v[n-1]<<endl;
		}
	}
}
