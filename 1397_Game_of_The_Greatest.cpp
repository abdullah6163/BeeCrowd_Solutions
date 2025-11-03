#include<bits/stdc++.h>
using namespace std;

int main(){

while(1){
	int t;
	cin>>t;

	if(t==0)break;
	int c1=0,c2=0;
	while(t--){
		int x,y;
		cin>>x>>y;

		if(x>y){
			c1++;
		}
		else if(y>x){
			c2++;
		}
	}
	cout<<c1<<" "<<c2<<endl;
}


}
