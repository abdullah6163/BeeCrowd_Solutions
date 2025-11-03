#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n; cin>>n;
   vector<int> v(n);
   for(auto &u:v)cin>>u;

   int res = 0;
   for(int i=1; i<n; i++){
	if(v[i]<v[i-1]){
		res = i+1;
		break;
	}
   }

   cout<<res<<endl;
}
