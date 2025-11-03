#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	char c;
	cin>>c;

	float arr[12][12];
	for(int i=0; i<12; i++){
		for(int j=0; j<12; j++){
			cin>>arr[i][j];
		}
	}


	float sum = 0.0;
	for(int i=0; i<12; i++){
		sum+= arr[i][n];
	}
	

	if(c=='S'){
		cout<<fixed<<setprecision(1)<<sum<<endl;
	}
	else{
		cout<<fixed<<setprecision(1)<<sum/12<<endl;
	}

}
