#include<bits/stdc++.h>
using namespace std;

long long fact(int n){
      if(n<2) return 1;
      long long fac = 1;
      for(int i=2; i<=n; i++){
		fac = fac*i;
      }
      return fac;

}


int main()
{
	int a,b;
	while(cin>>a>>b){
		long long ans1 = fact(a);
		long long ans2 = fact(b);
		cout<<ans1+ans2<<endl;
	}
}
