//Write a program to enter 10 different numbers and print them with array variables and their addresses.
#include<stdio.h>
int main()
{
	int a[10],i;
	printf("Enter 10 Numbers:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The entered numbers and addresses are:\n");
	for(i=0;i<10;i++)
	{
		printf("Address of %d is %d.\n",a[i],&a[i]);
	}
	return 0;
}