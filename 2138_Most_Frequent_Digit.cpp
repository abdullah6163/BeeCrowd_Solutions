#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;

	while(cin>>s){

		vector<int> v(10,0);

		for(int i=0; i<s.size(); i++){
			int n = s[i]-'0';
			v[n]++;
		}


		int mx = v[0];
		int mi = 0;

		for(int i=1; i<v.size(); i++){
			if(v[i]>mx || (v[i]==mx && i>mi)){
				mx = v[i];
				mi = i;
			}
		}

		cout<<mi<<endl;
	}
}
