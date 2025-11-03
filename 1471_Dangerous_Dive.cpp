#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b;

	while(cin>>a>>b){
		vector<int> v(b);
		for(auto &u:v)cin>>u;


		if(a-b == 0){
			cout<<'*'<<endl;
		}
		else{
			sort(v.begin(),v.end());
			int j=0;
			for(int i=1; i<=a; i++){
					if(v[j]!=i){
						cout<<i<<" ";
					}
					else{
						j++;
						}
			}
			cout<<endl;
		}

	}
}
