#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	int cs= 0;
	while(t--){
		string s,n;
		cin>>s>>n;
		cs++;
		if(s==n){
			cout<<"Caso #"<<cs<<": De novo!"<<endl;
		}

		else{
			if((s=="tesoura" && n=="papel") || (s=="papel" && n=="pedra") || (s=="pedra" && n=="lagarto") || (s=="lagarto" && n=="Spock") || (s=="Spock" && n=="tesoura") || (s=="tesoura" && n=="lagarto") || (s=="lagarto" && n=="papel") || (s=="papel" && n=="Spock") || (s=="Spock" && n=="pedra") || (s=="pedra" && n=="tesoura")){
				cout<<"Caso #"<<cs<<": Bazinga!"<<endl;
			}
			else{
				cout<<"Caso #"<<cs<<": Raj trapaceou!"<<endl;
			}

		}
	}
}
