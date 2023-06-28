//6.Write a program to accept 10 numbers and finds and prints the largest and smallest among those numbers
#include<stdio.h>
int main()
{
	int a[10],i,lar,sma;
	printf("Enter 10 Numbers:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	lar=sma=a[0];
	for(i=1;i<10;i++)
	{
		if(sma>a[i])
		sma=a[i];
		if(lar<a[i])
		lar=a[i];	
	}
	printf("%d is largest and %d is smallest number.",lar,sma);
	return 0;
}