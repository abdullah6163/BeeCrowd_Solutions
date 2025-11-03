#include<stdio.h>
int main()
{
	float a,b,c;
	scanf("%f",&a);
	
	 if(a>2000.00 && a<=3000.00){
			b=(a-2000)*8;
	printf("R$ %.2f\n",b/100);

	}
	else if(a>3000.00 && a<=4500.00){
		c=a-3000;
		b=(c*18)/100;
		printf("R$ %.2f\n",b+80);
	}
	else if(a>4500.00){
		c=a-4500;
		b=(c*28)/100;
		printf("R$ %.2f\n",b+350);
	}
	else{
		printf("Isento\n");
	}
	return 0;
}
