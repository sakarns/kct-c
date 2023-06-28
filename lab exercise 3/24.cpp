#include<stdio.h>
int main()
{
	int n,r,s;
	printf("Enter any number: ");
	scanf("%d",&n);
	for(s=0;n>0;n=n/10)
	{
		r=n%10;
		s=s+r;
	}
	printf("The sum of digit is %d.",s);
	return 0;
}