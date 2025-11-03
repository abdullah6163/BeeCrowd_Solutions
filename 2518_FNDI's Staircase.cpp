#include<bits/stdc++.h>
using namespace std;

int main()
{

	int n,h,c,l;
	while(cin>>n>>h>>c>>l){
		double m = double(l)/100.0;
		double otivuj = (sqrt((h*h)+(c*c))/100.0)*n;
		cout<<fixed<<setprecision(4)<<otivuj*m<<endl;
	}
}
