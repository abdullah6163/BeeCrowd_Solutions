#include<stdio.h>
int main()
{
    int n,a,b,x;
    char ch;
    scanf("%d",&n);
    scanf("%d %c %d",&a,&ch,&b);
    if(ch=='*')
    {
        x=a*b;
        if(x<=n)
        {
            printf("OK\n");
        }
        else
            printf("OVERFLOW\n");
    }
    else
    {
        x=a+b;
        if(x<=n)
        {
            printf("OK\n");
        }
        else
            printf("OVERFLOW\n");
        return 0;
    }
}