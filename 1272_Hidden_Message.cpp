#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin>>t;
	cin.ignore();

	while(t--){
			string s;
			getline(cin,s);

			string ss ="";
			int cnt = 0;

			for(int i=0; i<s.size(); i++){

				if(s[i]>='a' && s[i]<='z'){
					cnt++;
					if (cnt==1){
						ss+=s[i];
					}
				}

				if(s[i]>='a' && s[i]<='z' && s[i-1]==' ' && cnt!=1){
					ss+=s[i];
				}
			}
			cout<<ss<<endl;

	}
}
