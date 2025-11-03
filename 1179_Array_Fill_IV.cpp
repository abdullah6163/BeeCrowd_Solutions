#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> p,ip;

    for(int i=0; i<15; i++){
        int n;
        cin>>n;

        if(n%2==0){
            p.push_back(n);
        }
        else{
            ip.push_back(n);
        }

        if(p.size() == 5){
            for(int i=0; i<5; i++){
                cout<<"par["<<i<<"] = "<<p[i]<<endl;
            }
            p.clear();
        }
        if(ip.size() == 5){
             for(int i=0; i<5; i++){
                cout<<"impar["<<i<<"] = "<<ip[i]<<endl;
            }
            ip.clear();

        }
    }

        for(int i=0; i<ip.size(); i++){
                cout<<"impar["<<i<<"] = "<<ip[i]<<endl;
            }
        for(int i=0; i<p.size(); i++){
                cout<<"par["<<i<<"] = "<<p[i]<<endl;
            }



}
