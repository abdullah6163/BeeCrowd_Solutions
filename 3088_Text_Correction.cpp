#include<bits/stdc++.h>
using namespace std;

int main(){

	string s;
	while(getline(cin,s)){

		int cnt  = 0;
		for(int i=1; i<s.size(); i++){
			if(s[i]==',' && s[i-1]==' ' || s[i]=='.' && s[i-1]==' '){
				s.erase(i-1,1);
				i--;
			}
		}

		cout<<s<<endl;
	}
}
