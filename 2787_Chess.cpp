#include<bits/stdc++.h>
using namespace std;
int main()
{
	int r,c;cin>>r>>c;
	bool res = false;
	if((r%2 !=0 && c%2!=0) || (r%2 ==0 && c%2==0)) {
		res = true;
	}

	if(res){
		cout<<1<<endl;
	}
	else{
		cout<<0<<endl;
	}
}

