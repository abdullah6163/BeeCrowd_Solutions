#include<stdio.h>
int main(){

float avg;

float sum=0,count=0;

while(count<2){

	float n;
	scanf("%f",&n);


	if(n<0 || n>10){
		printf("nota invalida\n");
	}

	else{
		count++;
		sum+=n;
	}
}

avg = sum/2;
printf("media = %.2f\n",avg);



}
