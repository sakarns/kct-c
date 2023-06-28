//15.Write a program to read marks of 10 students and print out the top five.
#include<stdio.h>
int main()
{
	int arr[10];
	int i,j;
	int largest;
	printf("Enter 10 marks of student:\n");
	for(i=0;i<10;i++)
	{
		printf("Enter marks of student %d:\n",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10-1;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(arr[j]>arr[i])
			{
				largest=arr[i];
				arr[i]=arr[j];
				arr[j]=largest;
			}
		}
	}
	printf("The top five marks are:");
	for(i=0;i<5;i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}
