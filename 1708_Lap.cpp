#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t=1;
    //cin>>t;

    while(t--){
		double a,b;
		cin>>a>>b;

		double ans = ceil(b/(b-a));
		cout<<ans<<endl;


    }
}

