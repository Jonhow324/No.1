#include<stdio.h>
int main(void)
{
	int a,b,c;
	printf("input an integer:");
	scanf("%d",&a);
	b=a%5;
	c=a%7;
	if(b==0&&c==0)
	{
		printf("output:\nYse.");
	}
	else
	{
		printf("output:\nNO.");
	}
	return 0;
}
