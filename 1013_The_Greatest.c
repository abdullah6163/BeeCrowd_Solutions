#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int z,m;
    z=(a+b+abs(a-b))/2;
    m=(z+c+abs(z-c))/2;
    printf("%d eh o maior",m);
    printf("\n");
    return 0;
}