#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
int cnt = 0;
while(1){
cin>>n;
if(n==0)break;
vector<string> s(n);
int mx = 0;
for(int i=0; i<n; i++){
	cin>>s[i];
	int v = s[i].size();
	mx = max(mx,v);
}
if(cnt>0)cout<<endl;

for(int i=0; i<n; i++){
	if(s[i].size()<mx){
		for(int j=0;j<(mx-s[i].size()); j++){
			cout<<" ";
		}
	}
	cout<<s[i]<<endl;
}
cnt++;



}
}

