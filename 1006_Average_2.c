#include<stdio.h>
int main()
{
    double A,B,C;
    scanf("%lf",&A);
     scanf("%lf",&B);
    scanf("%lf",&C);
    double R;
    A=A*2;
    B=B*3;
    C=C*5;
    R=(A+B+C)/10;
    printf("MEDIA = %.1lf\n",R);
    return 0;
}
