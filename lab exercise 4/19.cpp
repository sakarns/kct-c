//19. Write a program to read n numbers from keyboard in to an array.
//Pass this array to a function which finds and displays the sum of even numbers only 
//and the product of odd numbers only.
#include<stdio.h>
int body(int a[]);
int main()
{
	int a[100],n,i;
	printf("Enter the total number: ");
	scanf("%d",&n);
	printf("Enter the %d number:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	body(a);
	return 0;
}
int body(int a[])
{
	int i,j,evensum=0,oddproduct=0;
	for(i=0;i<a[i];i++)
	{
		if(a[i]%2==0)
		{
			evensum+=a[i];
		}
	for(j=0;j<a[i];j++)
	{
		if(a[i]%2!=0)
		{
			oddproduct*=a[i];
		}
	}
	}
	printf("The sum of even number is %d and the product of odd number is %d",evensum,oddproduct);
	return evensum&&oddproduct;
}