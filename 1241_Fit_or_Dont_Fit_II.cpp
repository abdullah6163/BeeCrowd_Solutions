#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	while(n--){
		string a,b;
		cin>>a>>b;

		int bsize = b.size();
		int asize = a.size();

            if(asize>=bsize){
			string sub = a.substr((asize-bsize),bsize);
			if(sub==b){
				cout<<"encaixa"<<endl;

			}
			else{
				cout<<"nao encaixa"<<endl;
			}
            }
            else{
			cout<<"nao encaixa"<<endl;
            }




	}
}
