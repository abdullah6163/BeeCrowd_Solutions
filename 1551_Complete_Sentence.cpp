#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin>>t;
	cin.ignore();

	while(t--){
		string s;
		getline(cin,s);
			vector<int> v(26,0);

			for(int i=0; i<s.size(); i++){
				if(s[i]>='a' && s[i]<='z'){
					v[s[i]-97]++;
				}
			}

			int cnt = 0;
			for(int i=0; i<v.size(); i++){
				if(v[i]>0){
					cnt++;
				}
			}

			if(cnt==26){
				cout<<"frase completa"<<endl;
			}
			else if(cnt>=13 && cnt<26){
				cout<<"frase quase completa"<<endl;
			}

			else {
				cout<<"frase mal elaborada"<<endl;
			}

	}
}
