#include<stdio.h>
int main()
{
	int n,r,i;
	printf("Enter any number: ");
	scanf("%d",&n);
	for(i=1;n>0;n=n/10)
	{
		r=n%10;
		i=i*r;
	}
	printf("The product of digit is %d.",i);
	return 0;
}