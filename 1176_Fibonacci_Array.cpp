#include<bits/stdc++.h>
#define ll long long
using namespace std;


ll fib(ll n){
      ll v[n+1];
      v[0]=0;
      v[1]=1;

      for(ll i=2; i<=n; i++){
		v[i]=v[i-1]+v[i-2];
      }

      return v[n];
}



int main()
{
	int t; cin>>t;
	while(t--){
	ll n; cin>>n;
      cout<<"Fib("<<n<<") = "<<fib(n)<<endl;
	}
}
