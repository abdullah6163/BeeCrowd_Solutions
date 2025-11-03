#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s; int n;
    while(cin>>s>>n){

	int cnt = 0;
	int cnt2 = 0;
	for(int i=0; i<s.size(); i++){
		if(s[i]=='W')cnt++;
	}

	for(int i=0; i<s.size(); i++){
		if(s[i]=='R'){
			cnt2++;
		}

		if(s[i]=='W' || i==s.size()-1){
			if(cnt2>0 && cnt2%n!=0){
				cnt+=((cnt2/n)+1);
			}
			if(cnt2>0 && cnt2%n==0){
				cnt+=(cnt2/n);
			}
			cnt2=0;
		}
	}

	cout<<cnt<<endl;
    }
}
