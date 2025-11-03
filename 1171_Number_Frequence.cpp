#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	vector<int> v(n);
	for(auto &u:v)cin>>u;

	sort(v.begin(),v.end());
	vector<int> app,val;

	for(int i=0; i<n; i++){
		int cnt = 1;
		for(int j=i+1; j<n; j++){
			if(v[i]==v[j]){
				cnt++;
				v.erase(v.begin()+j);
				j--;
				n--;

			}
		}
		app.push_back(cnt);
		val.push_back(v[i]);
	}


	for(int i=0;i<n;i++){
		cout<<v[i]<<" aparece "<<app[i]<<" vez(es)"<<endl;
	}
}
