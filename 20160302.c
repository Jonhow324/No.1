#include<stdio.h>
int main(void)
{
	int x;
	double a,b;
	printf("input x:");
	scanf("%d",&x);
	if(x!=0)
	{
		if(x<0)
		{
			a=-5*x+27;
			printf("output:\nF<%d> = %.0lf",x,a);
		}
		if(x>0)
		{
			b=2*x-1;
			printf("output:\nF<%d> = %.0lf",x,b);
		}
	}
	else
	{
		printf("output:\nF<%d> = 7909",x);
	}
}
