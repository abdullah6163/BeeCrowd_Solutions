#include <stdio.h>
int main() {
double x1,y1;
scanf("%lf %lf",&x1,&y1);
double x2,y2;
scanf("%lf %lf",&x2,&y2);
double m,n,z;
m=(x2-x1);
n=(y2-y1);
z=sqrt((m*m)+(n*n));
printf("%.4lf",z);
printf("\n");
return 0;

}