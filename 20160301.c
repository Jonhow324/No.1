#include<stdio.h>
int main(void)
{
	int a,b;
	printf("input:"); 
	scanf("%d,%d",&a,&b);
	if(a!=b)
	{
	
		if(a>b)
		{
			printf("%d is bigger",a);
		}
		if(a<b)
		{
			printf("%d is bigger",b);
		}
	}
	else
	{
		printf("%d=%d",a,b);
	}
	return 0;
}
