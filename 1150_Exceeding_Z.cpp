#include<bits/stdc++.h>
using namespace std;

int main(){

int x; cin>>x;
int z;
cin>>z;
while(z<=x){
	cin>>z;
}

int sum=0,cnt=1;

for(int i=x; i<=z; i++){
	sum+=i;
	if(sum<z){
		cnt++;
	}
	else{
		break;
	}
}

cout<<cnt<<endl;

}
