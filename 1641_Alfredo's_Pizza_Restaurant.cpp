#include<bits/stdc++.h>
using namespace std;

int main()
{
   int a,b,c;
   
   int cnt = 0;
   while(1){
       cin>>a;
       if(a==0)break;
       cin>>b>>c;
       
       cnt++;
       a*=2;
       double d = sqrt((b*b)+(c*c));
       
       if(d>a){
           cout<<"Pizza "<<cnt<<" does not fit on the table."<<endl;
       }
       else{
           cout<<"Pizza "<<cnt<<" fits on the table."<<endl;
       }
   }
}