#include<stdio.h>
int main()
{
	int b,e,r=1,i;
	printf("Enter Base value: ");
	scanf("%d",&b);
	printf("Enter Exponential value: ");
	scanf("%d",&e);
	for(i=1;i<=e;i++)
	{
		r=r*b;
	}
	printf("The %d to the power %d is %d.",b,e,r);
	return 0;
  }