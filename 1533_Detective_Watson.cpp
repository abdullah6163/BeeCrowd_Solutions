#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   while(cin>>n){
	if(n==0)break;

	vector<int> v(n);
	for(auto &u:v)cin>>u;

	vector<int> c = v;
	sort(c.rbegin(),c.rend());
	int mx = c[1];

	for(int i=0 ; i<n; i++){
		if(v[i]==mx){
			cout<<i+1<<endl;
			break;
		}
	}
   }
}
