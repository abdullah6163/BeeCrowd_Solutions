#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,cnt = 0;
	double d,sum=0;
	while(1){
		cin>>d;
		if(d<0.0 || d>10.0)cout<<"nota invalida"<<endl;
		else{
			cnt++;
			sum+=d;
			if(cnt==2){

				cout<<fixed<<setprecision(2)<<"media = "<<sum/2<<endl;
				cout<<"novo calculo (1-sim 2-nao)"<<endl;

				while(1){
				cin>>n;
				if(n==1){
					cnt=0;
				      sum=0;
					break;
				}
				else if(n==2){
						return 0;

				}
				else{
				 cout<<"novo calculo (1-sim 2-nao)"<<endl;

				}
				}
			}
		}

	}
}
