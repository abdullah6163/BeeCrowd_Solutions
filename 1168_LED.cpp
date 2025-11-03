#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	while(n--){
		string s;
		cin>>s;
		
		int cnt = 0;

		for(int i=0; i<s.size(); i++){
			if(s[i]=='0' || s[i]=='9' || s[i]=='6'){
				cnt+=6;
			}
			else if(s[i]=='2' || s[i]=='3' || s[i]=='5'){
				cnt+=5;
			}
			else if(s[i]=='8'){
				cnt+=7;
			}
			else if(s[i]=='7'){
				cnt+=3;
			}
			else if(s[i]=='4'){
				cnt+=4;
			}
			else if(s[i]=='1'){
				cnt+=2;
			}


		}



		cout<<cnt<<" leds"<<endl;
	}
}
