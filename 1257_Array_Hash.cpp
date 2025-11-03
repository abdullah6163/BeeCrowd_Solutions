#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;
		int cnt = 0;
		for(int i=0; i<n; i++){
			string s;
			cin>>s;

			for(int j=0;j<s.size(); j++){
				char c = s[j];
				int pos = j;
				int serial = c-'A';
				int element = i;

				cnt+=(pos+serial+element);

			}
		}

		cout<<cnt<<endl;
	}
}
