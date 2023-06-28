//5.Write a program to find factorial of a given number using user defined function named long int factorial(int,int).

#include<stdio.h>
int main()
{
	int fact();
	printf("Enter a Number to Find Factorial: ");
    printf("\nFactorial: %d ",fact());
    return 0;
}
int fact()
{
    int i,fact=1,n;
    scanf("%d",&n);
    for(i=1;i<=n; i++)
    {
        fact=fact*i;
    }
    return fact;
}