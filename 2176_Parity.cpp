#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	int cnt = 0;
	for(int i=0; i<s.size(); i++){
		if(s[i]=='1'){
			cnt++;
		}
	}
	if(cnt%2==0){
		s+='0';
	}
	else{
		s+='1';
	}

	cout<<s<<endl;

}
