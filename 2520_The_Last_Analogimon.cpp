#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,b;
	while(cin>>n>>b){
		int a[n][b];
            int r1,r2,c1,c2;
		for(int i=0; i<n; i++){
			for(int j=0; j<b; j++){

					cin>>a[i][j];

					if(a[i][j]==1){
						r1=i;
						c1=j;
					}

					if(a[i][j]==2){
						r2=i;
						c2=j;
					}
			}
		}

		int dis= abs(r1-r2)+abs(c1-c2);
		cout<<dis<<endl;





	}
}
