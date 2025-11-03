#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	while(n--){
		float f; cin>>f;
		int  day = 0;
		while(f>1.0){
			f/=2;
			day++;
		}
		cout<<day<<" dias"<<endl;
	}
}
