#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

   int t;
   cin>>t;
   int cnt = 0;
   while(t--){
	int n;
	cin>>n;

	if(n%3 == 0) cnt+=n;
	else{
		int m = n%3;
		cnt+=(n-m);
	}
   }

   cout<<cnt<<endl;
}

