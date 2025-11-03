#include<stdio.h>
int main()
{
    int num,i,j,max=0,count=0;
    for(i=1;i<=100;i++)
    {
        scanf("%d",&num);
        count++;
        if(num>max)
        {
            max=num;
            j=count;
        }
    }
    printf("%d\n%d\n",max,j);
    return 0;
}


