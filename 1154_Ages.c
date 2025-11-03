#include<stdio.h>
int main(){

	float count=0,sum=0;
	float avg;

while(1){
	int n;
	scanf("%d",&n);

	if(n<0){
		break;
	}

	sum+=n;
	count++;


}

     avg = sum/count;
     printf("%.2f\n",avg);



}
