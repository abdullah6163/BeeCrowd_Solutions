#include <stdio.h>

int main() {

   int i,count;
   float sum=0;
   for(int i=0;i<6;i++){
	float a;
	scanf("%f",&a);
	if(a>0){
		sum+=a;
		count++;

	}


   }

   sum/=count;

   printf("%d valores positivos\n",count);
   printf("%.1f\n",sum);

}
