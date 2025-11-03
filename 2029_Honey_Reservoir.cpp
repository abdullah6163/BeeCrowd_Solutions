#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a,b;
    while(cin>>a>>b){
	b/=2;
	double h = a/(3.14*b*b);
	cout<<fixed<<setprecision(2)<<"ALTURA = "<<h<<endl;

	double area = 3.14*b*b;
	cout<<fixed<<setprecision(2)<<"AREA = "<<area<<endl;



    }

}
