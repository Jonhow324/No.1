#include<stdio.h>
int main(void)
{
	int n,a,b,c;
	printf("����ˮ�ɻ���Ϊ:\n") ;
	for(n=100;n<1000;n++)
	{
		a=n/100;
		b=(n/10)%10;
		c=n%10;
		if(a*a*a+b*b*b+c*c*c==n)
		{
			printf("%d\n",n);
		}
	}
	return 0;
}
