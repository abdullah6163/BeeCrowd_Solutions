#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    while(cin>>a>>b){

	if(a==0 && b==0)break;

	vector<int> v(b);
	for(auto &u:v)cin>>u;

	sort(v.begin(),v.end());
	int cnt = 0;
	if(v[0]==v[1])cnt++;
	for(int i=2; i<=b; i++){
		if(v[i]==v[i-1] && v[i]!=v[i-2]){
			cnt++;
		}
	}

	cout<<cnt<<endl;
}
}
