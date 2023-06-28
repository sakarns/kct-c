//11.Write a program to read 10 numbers and reorders them in decending order using function.
#include<stdio.h>
void dec_sort(int a[100],int n);
int main()
{
	int a[100],i,n;
	printf("Enter n: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	dec_sort(a,n);
	printf("Array in decending order is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
void dec_sort(int a[100],int n)
{
	int i, j, temp;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}