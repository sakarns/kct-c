//Write a program that reads 10 integers from keyboard and displays entered numbers on the screen.
#include<stdio.h>
int main()
{
	int a[10],i;
	printf("Enter 10 Numbers:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The entered numbers are:\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}