#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    string t ="";

    while(1){
	getline(cin,s);
	int cnt = 0;
	int first;

	if(s=="0"){

			break;
		}
	vector<int> v;
	string w = "";
	for(int i=0; i<s.size(); i++){
		if(isalpha(s[i])){
			cnt++;
			if(cnt==1){
				first = i;
			}
		}
		if(s[i]==' ' || i==s.size()-1){
			v.push_back(cnt);
			w = s.substr(first,cnt);
			{
				if(w.size()>=t.size()){
					t = w;
				}
			}

			cnt = 0;
		}
	}

	for(int i=0; i<v.size(); i++){
		cout<<v[i];
		if(i!=v.size()-1){
			cout<<'-';
		}
	}

	cout<<endl;


    }
    cout<<endl;

    cout<<"The biggest word: "<<t<<endl;
}
