#include<stdio.h>
int main(void)
{
	int a,b,sum;
	printf("input:\n");
	scanf("%d/%d",&a,&b);
	switch(a)
	{
		case 1:
			sum=b;
			break;
		case 2:
			sum=31+b;
			break;
		case 3:
			sum=31+29+b;
			break;
		case 4:
			sum=31*2+29+b;
			break;
		case 5:
			sum=31*2+30+29+b;
			break;
		case 6:
			sum=31*3+30+29+b;
			break;
		case 7:
			sum=31*3+30*2+29+b;
			break;
		case 8:
			sum=31*4+30*2+29+b;
			break;
		case 9:
			sum=31*5+30*2+29+b;
			break;
		case 10:
			sum=31*5+30*3+29+b;
			break;
		case 11:
			sum=31*6+30*3+29+b;
			break;
		case 12:
			sum=31*6+30*4+29+b;
			break;		
	}
	printf("output:\nsum=%d",sum);
	return 0;
}
