#include<bits/stdc++.h>
using namespace std;

bool prime(int n){
    if(n<=1)return false;
    for(int i=2; i<=n/2; i++){
        if(n%i == 0)return false;
    }
    return true;
}


int main()
{   
    int n;
        
    while(cin>>n){
        if(prime(n)){
            string s = to_string(n);
            int cnt =0;
            for(int i=0; i<s.size(); i++){
                if(prime(s[i]-'0')){
                    cnt++;
                }
            }
            
            if(cnt == s.size()){
                cout<<"Super"<<endl;
            }
            else{
                cout<<"Primo"<<endl;
            }
        }
        
        else{
            cout<<"Nada"<<endl;
        }
        
    }
}