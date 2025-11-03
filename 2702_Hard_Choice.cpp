#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t=1;
    //cin>>t;

    while(t--){

	int a,b,c,d,e,f;
	cin>>a>>b>>c>>d>>e>>f;
	int cnt =0;

	if(d-a >0)cnt+=(d-a);
	if(e-b >0)cnt+=(e-b);
	if(f-c >0)cnt+=(f-c);

	cout<<cnt<<endl;

    }
}

