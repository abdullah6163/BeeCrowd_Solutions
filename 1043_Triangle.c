#include<stdio.h>
int main(){
float A,B,C;
scanf("%f %f %f",&A,&B,&C);
if(A+B>C && B+C>A && A+C>B){
        float d;
d=A+B+C;
printf("Perimetro = %.1f\n",d);}
else{
        float e;
e=0.5*(A+B)*C;
printf("Area = %.1f\n",e);}


return 0;
}
