#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("Enter two inputs:\n");
	scanf("%1d%1d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("\nIterchanged value is %d%d",a,b);
	return 0;
}