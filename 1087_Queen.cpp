#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a,b,c,d;

    while(1){
	cin>>a>>b>>c>>d;

	if(a==0 && b==0 && c==0 && d==0)break;

	if(a==c && b==d){
		cout<<0<<endl;
	}
	else{
		if((a==c && b!=d) || (a!=c && b==d) || abs(a-c)==abs(b-d)){
			cout<<1<<endl;
		}
		else{
			cout<<2<<endl;
		}




	}

    }
}

