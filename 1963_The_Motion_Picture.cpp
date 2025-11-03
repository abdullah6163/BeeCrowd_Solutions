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

		double high = b-a;
		double ans = (100*high)/a;
		cout<<fixed<<setprecision(2)<<ans<<"%"<<endl;


    }
}

