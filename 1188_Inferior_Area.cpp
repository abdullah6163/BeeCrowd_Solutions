#include<bits/stdc++.h>
using namespace std;

int main()
{
	char c;
	cin>>c;

	double arr[12][12];
	for(int i=0; i<12; i++){
		for(int j=0; j<12; j++){
			cin>>arr[i][j];
		}
	}

	int cnt = 0;
	double sum = 0.0;
	for(int i=0; i<12; i++){
		for(int j=0; j<12; j++){
			if(j<i && j>(11-i)){
				sum+=arr[i][j];
				cnt++;
			}
		}
	}

	if(c=='S'){
		cout<<fixed<<setprecision(1)<<sum<<endl;
	}
	else{
		cout<<fixed<<setprecision(1)<<sum/cnt<<endl;
	}

}
