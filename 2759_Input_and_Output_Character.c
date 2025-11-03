#include<stdio.h>
int main()
{
   char p,q,r;
   scanf("%c\n%c\n%c",&p,&q,&r);

   printf("A = %c, B = %c, C = %c\n",p,q,r);
   printf("A = %c, B = %c, C = %c\n",q,r,p);
   printf("A = %c, B = %c, C = %c\n",r,p,q);




    return 0;
}
