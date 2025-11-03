#include<bits/stdc++.h>
using namespace std;

int main(){

int n,index;
cin>>n;

int a[n];
for(int i=0;i<n;i++){
	cin>>a[i];
}

int low=a[0];

for(int i=0;i<n;i++){
	if(a[i]<low){
		low=a[i];
		 index = i;
	
	}
}


cout<<"Menor valor:"<<" "<<low<<endl;
cout<<"Posicao:"<<" "<<index<<endl;



}
