#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r1,x1,y1,r2,x2,y2;
    while(cin>>r1>>x1>>y1>>r2>>x2>>y2){
        
        double d = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
        if(d+r2<=r1){
            cout<<"RICO"<<endl;
        }
        else{
            cout<<"MORTO"<<endl;
        }
        
    }
}