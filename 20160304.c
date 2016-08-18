#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a,b;
	char x;
	printf("input:");
	scanf("%d%c%d",&a,&x,&b);
	if(b==0)
	{
		switch(x)
		{
			case'+':printf("output:\n%d+%d=%d",a,b,a+b);break;
			case'-':printf("output:\n%d-%d=%d",a,b,a-b);break;
			case'*':printf("output:\n%d*%d=%d",a,b,a*b);break;
			case'/':printf("output:\nError! chu shu wei 0.\n");break;
			case'%':printf("output:\nError! chu shu wei 0.\n");break;
		}	
	}
	else
	{
		switch(x)
		{
			case'+':printf("output:\n%d+%d=%d",a,b,a+b);break;
			case'-':printf("output:\n%d-%d=%d",a,b,a-b);break;
			case'*':printf("output:\n%d*%d=%d",a,b,a*b);break;
			case'/':printf("output:\n%d/%d=%.2f",a,b,(double)a/b);break;
			case'%':printf("output:\n%d%c%d=%d",a,x,b,a%b);break;
		}
	}
	
	return 0;
}
