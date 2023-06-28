#include<stdio.h>
int main()
{
	int n,c,s;
	printf("Enter any number from 1-20: ");
	scanf("%d",&n);
	if (n%2==0)
	printf("\nThe number is even.\nSo,the cube root of %d is %d.",n,n*n*n);
	else
	printf("\nThe number is odd.\nSO,the square root of %d is %d.",n,n*n);
	return 0;
}