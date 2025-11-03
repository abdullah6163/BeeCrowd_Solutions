#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin>>t;
	int c1=0,c2=0,c3=0,c4=0;
	
	while(t--)
	{
		int n;
		cin>>n;
		if(n%2 == 0)c1++;
		if(n%3 == 0)c2++;
		if(n%4 == 0)c3++;
		if(n%5 == 0)c4++;
		

	}
	cout<<c1<<" Multiplo(s) de 2"<<endl;
	cout<<c2<<" Multiplo(s) de 3"<<endl;
	cout<<c3<<" Multiplo(s) de 4"<<endl;
	cout<<c4<<" Multiplo(s) de 5"<<endl;



}
