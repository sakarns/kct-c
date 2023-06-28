/*Q2. Write a program to find the sum of all the elements of an array using pointer.*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int a[50],n,i,*p,sum=0;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("Enter %d integer numbers:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	p=&a[0];
	for(i=0;i<n;i++)
	{
		sum=sum+*p;
		p++;
	}
	printf("Sum = %d",sum);
	return 0;
}