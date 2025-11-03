#include<stdio.h>
int main()
{
    int m,n,i=1,j,k,sum=0;
    while(i)
    {
        scanf("%d %d",&m,&n);
        if(m<=0 || n<=0)
            break;
         if(m>n)
        {
            k=m;
            m=n;
            n=k;
        }
        for(j=m;j<=n;j++)
        {
            printf("%d ",j);
            sum=sum+j;
        }
        printf("Sum=%d\n",sum);
       sum=0; 
    }
return 0;
}