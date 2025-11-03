#include<bits/stdc++.h>
using namespace std;

int main(){
	string s,t,r;
	getline(cin,s);
	getline(cin,t);
	getline(cin,r);

	cout<<s<<t<<r<<endl;
	cout<<t<<r<<s<<endl;
	cout<<r<<s<<t<<endl;

	cout<<s.substr(0,10)<<t.substr(0,10)<<r.substr(0,10)<<endl;

}
