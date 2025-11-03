#include<stdio.h>
int main(){
    char n;
    scanf("%s",&n);
    double a,b,c;
    scanf("%lf",&a);
    scanf("%lf",&b);
     c=(b*15/100)+a;

    printf("TOTAL = R$ %.2lf\n",c);

    return 0;


}
