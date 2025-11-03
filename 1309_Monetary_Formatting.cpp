#include<bits/stdc++.h>
using namespace std;

int main(){
	string s,t;
	while(cin>>s>>t){
		if(t.size()==1){
		t+="0";
		reverse(t.begin(),t.end());
	}

	int total = s.size();
	int rem = total%3;

	string fst = "";
	if(rem>0){
		fst = s.substr(0,rem);
	}

	for(int i=rem; i<total; i+=3){
		if(!fst.empty()){
			fst+=',';
		}
		fst+=s.substr(i,3);
	}

	cout<<"$"<<fst<<"."<<t<<endl;
	}

	

}

