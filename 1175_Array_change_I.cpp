#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n = 20;
	vector<int> v(n);

	for(auto &u:v)cin>>u;
	reverse(v.begin(),v.end());

	for(int i=0;i<n; i++){
		cout<<"N["<<i<<"] = "<<v[i]<<endl;
	}
}
