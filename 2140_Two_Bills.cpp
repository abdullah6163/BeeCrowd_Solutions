#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b;
	while(1){
		cin>>a>>b;
		if(a==0 && b==0){
			break;
		}
		int f = b-a;
		bool res = false;
		vector<int> v={2,5,10,20,50,100};
		for(int i=0; i<6; i++){
			for(int j=0; j<6; j++){
				if((v[i]+v[j]==f) && i!=j){
					res = true;
				}
			}
		}
		if(res)cout<<"possible"<<endl;
		else cout<<"impossible"<<endl;






	}

}
