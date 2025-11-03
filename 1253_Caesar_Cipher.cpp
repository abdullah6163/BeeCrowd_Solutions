#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
			string s;
			cin>>s;

			int n;
			cin>>n;

			if(n==0){
				cout<<s<<endl;
			}
			else{

				for(int i=0; i<s.size(); i++){

					char c = s[i];
					int serial = c-64;

					int pos = serial-n;

					if(pos>0){
						s[i]= 'A'+(pos-1);
					}
					else{
						s[i]= 'A'+ (26- abs(pos)-1);
					}

				}


				cout<<s<<endl;
			}
		}
	}

