#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

   string s;

   while(getline(cin,s)){

	int cnt1 = 0, cnt2 =0;

	for(int i=0; i<s.size(); i++){

		if(s[i]=='_'){
			cnt1++;
			if(cnt1 % 2 != 0){
				cout<<"<i>";
			}
			else{
				cout<<"</i>";
			}
		}
		else if(s[i]=='*'){
			cnt2++;
			if(cnt2 % 2 != 0){
				cout<<"<b>";
			}
			else{
				cout<<"</b>";
		}

		}
		else{
			cout<<s[i];
		}
	}

	cout<<endl;

   }
}
