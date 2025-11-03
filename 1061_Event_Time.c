#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
   ll d1,h1,m1,s1;
   ll d2,h2,m2,s2;
   string s;
   cin>>s;
   cin>>d1>>h1>>s>>m1>>s>>s1;
   cin>>s;
   cin>>d2>>h2>>s>>m2>>s>>s2;
   
   ll hour = h2-h1;
   ll day = d2-d1;
   ll minit = m2-m1;
   ll sec = s2-s1;
   
   if(sec<0){
       sec+=60;
       minit--;
   }
   if(minit<0){
       minit+=60;
       hour--;
   }
   if(hour<0){
       hour+=24;
       day--;
   }
  

   cout<<day<<" dia(s)"<<endl;
   cout<<hour<<" hora(s)"<<endl;
   cout<<minit<<" minuto(s)"<<endl;
   cout<<sec<<" segundo(s)"<<endl;



}
