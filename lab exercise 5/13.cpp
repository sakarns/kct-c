//13.Write a program to generate the Fibonacci series using recursive function.

#include <stdio.h>
int fibbonacci(int n)
{
	if(n==0)
	{
		return 0;
	}
	else if(n==1)
	{
		return 1;
	}
	else
	{
		return (fibbonacci(n-1)+fibbonacci(n-2));
	}
}

int main()
{
	int i,n;
	printf("Enter n: ");
	scanf("%d",&n);
	printf("Fibbonacci of %d: ",n);
	for(i=0;i<n;i++)
	{
		printf("%d ",fibbonacci(i));
	}
	return 0;
}