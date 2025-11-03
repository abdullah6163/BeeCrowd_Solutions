#include<stdio.h>
int main()
{
    int X,Y,sum=0;
    scanf("%d\n%d",&X,&Y);
    if(X>Y){
        int temp=X;
        X=Y;
        Y=temp;
    }
    else
        X=X;
    Y=Y;
    for(int i=X;i<=Y;i++){
        if(i%13 != 0)
    sum=sum+i;
    }
        printf("%d\n",sum);

}
