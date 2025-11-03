#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t=1;
    //cin>>t;

    while(t--){

		int a,b;


		while(cin>>a>>b){
			int sum = 0;

			while(b !=0 ){
				int d = b%10;
				sum+=d;
				b/=10;
			}

			if(sum % 3 == 0){
				cout<<sum<<" sim"<<endl;
			}
			else{
				cout<<sum<<" nao"<<endl;
			}
		}


    }
}

