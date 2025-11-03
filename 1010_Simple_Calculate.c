#include<stdio.h>
int main()
{
	int m,n;
	float p,q;

		scanf("%d %d %f",&m,&n,&p);


	q=p*n;
	scanf("%d %d %f",&m,&n,&p);
	q=q+(p*n);
	printf("VALOR A PAGAR: R$ %.2f\n",q);
}
