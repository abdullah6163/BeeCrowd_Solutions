#include <bits/stdc++.h>
using namespace std;

int main() {
    char L;
    cin>>L;
    char ar[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    for(int i=0;i<26;i++){
        if(ar[i]==L){
            cout<<i+1<<endl;
            break;
        }
    }

    return 0;
}