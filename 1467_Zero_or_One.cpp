#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a,b,c;
    while(cin>>a>>b>>c){

	if(a==b && a!=c)cout<<'C'<<endl;
	else if(a==c && a!=b)cout<<'B'<<endl;
	else if(b==c && b!=a)cout<<'A'<<endl;
	else if(a==b && a==c)cout<<'*'<<endl;

   }


}
