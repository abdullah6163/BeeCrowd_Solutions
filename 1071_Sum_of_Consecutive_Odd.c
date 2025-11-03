#include<stdio.h>
int main()
{
   int x,y,temp,sum=0;
   scanf("%d\n%d",&x,&y);
   if(x>y){
        temp = x;
        x = y;
        y = temp;
   }
    else
    x=x;
    y=y;

    for(int i=x+1;i<y;i++){
        if(i%2!=0){
            sum =sum+i;
        }
    }
    printf("%d\n",sum);


}
