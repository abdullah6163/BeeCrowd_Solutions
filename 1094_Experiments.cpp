#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    int c1=0,c2=0,c3=0;
    while(t--){
        int n;
        char c;
        cin>>n>>c;
        if(c=='C')c1+=n;
        else if(c=='R')c2+=n;
        else if(c=='S')c3+=n;
        
    }
    int sum = c1+c2+c3;
    cout<<"Total: "<<c1+c2+c3<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<c1<<endl;
     cout<<"Total de ratos: "<<c2<<endl;
      cout<<"Total de sapos: "<<c3<<endl;
   
    
    double cc1= (c1*100.00)/sum;
    double cc2= (c2*100.00)/sum;
    double cc3= (c3*100.00)/sum;
    
    cout<<fixed<<setprecision(2)<<"Percentual de coelhos: "<<cc1<<" %"<<endl;
    cout<<fixed<<setprecision(2)<<"Percentual de ratos: "<<cc2<<" %"<<endl;
    cout<<fixed<<setprecision(2)<<"Percentual de sapos: "<<cc3<<" %"<<endl;
    
}