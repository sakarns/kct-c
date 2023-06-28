#include<stdio.h>
int main()
{
	int f=1,n,i;
	printf("Enter the number: ");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
    f=f*i;
    printf("Factorial of %d is %d.",n,f);
	return 0;
}