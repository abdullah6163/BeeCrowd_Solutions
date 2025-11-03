#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	cin.ignore();

	while(n--){
		string s;
		getline(cin,s);

		vector<int> v(26,0);
		for(int i=0; i<s.size(); i++){
			char c = tolower(s[i]);
			if(c>='a' && c<='z'){
				int pos = c-96;
				pos--;
				v[pos]++;
			}

		}

		int mx = *max_element(v.begin(),v.end());

		for(int i=0; i<v.size(); i++){
			if(v[i]==mx){
				int ans = i+1;
				char ch = 'a'+(ans-1);
				cout<<ch;

			}
		}

		cout<<endl;

	}

}
