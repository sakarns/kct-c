//Write a program that asks user to enter 10numbers, read them into an array 
//and finds the sum, product, average and maximum of all numbers and prints them.
#include<stdio.h>
int main()
{
int a[10],i,p=1,max=a[0];
float ave,s=0;
	printf("Enter 10 Numbers:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		s=s+a[i];
		p=p*a[i];
		ave=s/10;
	}
	for(i=1;i<10;i++)
	{
		if(max<a[i])
		max=a[i];
	}
	printf("The sum is %f.\n",s);
	printf("The product is %d.\n",p);
	printf("The average is %f.\n",ave);
	printf("The maximum number is %d",max);
	return 0;
}