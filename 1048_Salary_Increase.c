#include<stdio.h>
int main()
{
    float a;
    scanf("%f",&a);
    if(a>=0 && a<=400){
        printf("Novo salario: %.2f\n",a+(a*15)/100);
    printf("Reajuste ganho: %.2f\n",(a*15)/100);
    printf("Em percentual: 15 %s\n","%");
    }
   else if(a>=400.01 && a<=800){
        printf("Novo salario: %.2f\n",a+(a*12)/100);
    printf("Reajuste ganho: %.2f\n",(a*12)/100);
    printf("Em percentual: 12 %s\n","%");
   }
   else if(a>=800.01 && a<=1200){
        printf("Novo salario: %.2f\n",a+(a*10)/100);
    printf("Reajuste ganho: %.2f\n",(a*10)/100);
    printf("Em percentual: 10 %s\n","%");
   }
    else if(a>=1200.01 && a<=2000){
        printf("Novo salario: %.2f\n",a+(a*7)/100);
    printf("Reajuste ganho: %.2f\n",(a*7)/100);
    printf("Em percentual: 7 %s\n","%");
    }
   else if(a>2000){
        printf("Novo salario: %.2f\n",a+(a*4)/100);
    printf("Reajuste ganho: %.2f\n",(a*4)/100);
    printf("Em percentual: 4 %s\n","%");
   }
      return 0;
}
