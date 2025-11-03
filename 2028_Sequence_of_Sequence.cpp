#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	int cs = 0;
	while(cin>>n){
		cs++;
		int num = ((n*(n+1))/2)+1;
		cout<<"Caso "<<cs<<": "<<num<<" numero";
		if(n>0)cout<<"s";
		cout<<endl;
		cout<<0;
		for(int i=1; i<=n; i++){
			      int k = i;
				while(k--){
					cout<<" "<<i;
				}
		}
		cout<<endl;
		cout<<endl;

	}
}
