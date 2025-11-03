#include<bits/stdc++.h>
using namespace std;

int main(){

	string s;

	while(getline(cin,s)){

		bool pos = true;
		int cnt1=0, cnt2=0, cnt3=0;
		for(int i=0; i<s.size(); i++){
			if(s[i]>='a' && s[i]<='z')cnt1++;
			if(s[i]>='A' && s[i]<='Z')cnt2++;
			if(s[i]>='0' && s[i]<='9')cnt3++;
			if(!isalnum(s[i]))pos=false;
		}


		if(cnt1>0 && cnt2>0 && cnt3>0 && pos && s.size()>=6 && s.size()<=32){
			cout<<"Senha valida."<<endl;
		}
		else{
			cout<<"Senha invalida."<<endl;
		}
	}
}
