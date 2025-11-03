#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;

	while(cin>>n){
			
            if(n==0)break;
	
		int cnt = 0;
		while(1){
			cnt++;
			vector<int> v(n);
			for(auto &u:v)cin>>u;
			bool pos = true;

			for(int i=0; i<n; i++){
				if(v[i]!=i+1){
				pos = false;
				v.clear();
				break;

				}
			}

			if(pos)break;
		}

		cout<<cnt<<endl;


	}
}
