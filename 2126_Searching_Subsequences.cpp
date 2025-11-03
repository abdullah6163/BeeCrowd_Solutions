#include<bits/stdc++.h>
using namespace std;

int main(){

	string s,t;
	int cs = 0;

	while(cin>>s>>t){
		cs++;

		int cnt  = 0;

		int sz = s.size();
		int tz = t.size();

		int ls = -1;

		for(int i=0; i<= tz-sz; i++){
			if(t.substr(i,sz)==s){
				cnt++;
				ls = i+1;
			}
		}

		if(cnt==0){
			cout<<"Caso #"<<cs<<":"<<endl;
			cout<<"Nao existe subsequencia"<<endl;
		}

		else{
			cout<<"Caso #"<<cs<<":"<<endl;
			cout<<"Qtd.Subsequencias: "<<cnt<<endl;
			cout<<"Pos: "<<ls<<endl;

		}
		
		cout<<endl;

	}
}
