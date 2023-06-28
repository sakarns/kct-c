#include<stdio.h>
int main()
{
	int n,s=0,r;
	printf("Enter five digit number: ");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		s=s+r;
		n=n/10;
	}
printf("Sum is %d",s);
return 0;
}