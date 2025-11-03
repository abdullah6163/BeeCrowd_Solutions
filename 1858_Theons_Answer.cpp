#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	for(auto &u:v){
		cin>>u;
	}

	int m = min_element(v.begin(),v.end())-v.begin();
	cout<<m+1<<endl;
}

