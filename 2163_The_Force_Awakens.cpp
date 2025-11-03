#include<bits/stdc++.h>
using namespace std;

int main()
{
	int row,col;
	cin>>row>>col;

	int a[row][col];

	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			cin>>a[i][j];
		}
	}
	int x=0,y=0;
	for(int i=1; i<row-1; i++){
		for(int j=1; j<col-1; j++){
			if(a[i][j]==42 && a[i-1][j]==7 && a[i+1][j]==7 && a[i][j-1]==7 && a[i][j+1]==7 && a[i-1][j+1]==7 && a[i+1][j-1]==7 && a[i-1][j-1]==7 && a[i+1][j+1]==7){
				x=i+1;
				y=j+1;
			}
		}
	}


	cout<<x<<" "<<y<<endl;




}
