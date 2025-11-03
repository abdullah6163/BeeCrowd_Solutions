#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	while(getline(cin,s)){
		int cnt = 0;

		for(int i=0; i<s.size(); i++){
			if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
				cnt++;
				if(cnt%2 == 0){
					s[i]=tolower(s[i]);
				}
				else{
					s[i]=toupper(s[i]);
				}
			}

		}

		cout<<s<<endl;
	}
}
