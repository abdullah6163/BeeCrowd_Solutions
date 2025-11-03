#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        float x,y,z;
        scanf("%f %f",&x,&y);

         if(y==0)
        {
            printf("divisao impossivel\n");
        }
       else 
        {
            z=x/y;
            printf("%.1f\n",z);

        }
         
    }
return 0;
}


