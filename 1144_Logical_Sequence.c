#include<stdio.h>
#include<math.h>
int main(){

int n;
scanf("%d",&n);
int j,k;

for(int i=1;i<=n;i++){

	j= i*i;
	k= i*i*i;

	printf("%d %d %d\n",i,j,k);
	printf("%d %d %d\n",i,j+1,k+1);


}


}
