#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	double a,b,c,root,a1,a2;
	cin>>a>>b>>c;

	root=sqrt((b*b)-(4.0*a*c));
	a1= (-b+root)/(2*a);
	a2= (-b-root)/(2*a);
	if(a!=0 && root>=0){
		cout<<fixed<<setprecision(5)<<"R1 = "<<a1<<endl<<"R2 = "<<a2<<endl;
	}
	else{
		cout<<"Impossivel calcular"<<endl;
	}

}
