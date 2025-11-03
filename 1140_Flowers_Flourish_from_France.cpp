#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;

	while(1){
		getline(cin,s);
		if(s=="*")break;
		bool pos = true;

		for(char &c:s){
			c = tolower(c);
		}


		for(int i=0; i<s.size(); i++){
			if(s[i]==' ' && s[i+1]!=s[0]){
				pos = false;
				break;
			}
		}

		if(pos){
			cout<<"Y"<<endl;
		}
		else{
			cout<<"N"<<endl;
		}
	}
}
