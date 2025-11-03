#include<bits/stdc++.h>
using namespace std;

int main(){

int n,m,temp;
cin>>n>>m;

if(n>m){
	temp = n;
	n = m;
	m = temp;
}

else{
	n = n;
	m = m;
}

for(int i=n+1; i<m;i++){
	if(i%5==2 || i%5==3){
		cout<<i<<endl;
	}
}






}
