//9.Write a program to calculate Fibonacci series using recursive function.

#include <stdio.h>
int fibbonacci(int n)
{
	int nextTerm,t1 = 0, t2 = 1;
	printf("Fibonacci Series: %d, %d,", t1, t2);
	nextTerm = t1 + t2;
	while (nextTerm <= n)
	{
    printf("%d ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
    }
    return nextTerm;
}

int main()
{
	int  n;
    printf("Enter a positive number for fibonacci series upto: ");
    scanf("%d",&n);
    fibbonacci(n);
	return 0;                                       
    
}