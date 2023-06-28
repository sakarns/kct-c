/*Q3. Write a program to read marks obtained by n student in a subject and display the top five marks.*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[100],i,j,size,temp,*ptr;
	printf("\nEnter the number of student: ");
	scanf("%d",&size);
	printf("\nEnter the marks in C\n");
	for(i=0;i<size;i++)
	scanf("%d",&arr[i]);
	ptr=&arr[0];
	for(i=0;i<size-1;i++)
	{
		for(j=0;j<size-i-1;j++)
		{
			if(*(ptr+j)<*(ptr+j+1))
			{
				temp=*(ptr+j);
				*(ptr+j)=*(ptr+j+1);
				*(ptr+j+1)=temp;
			}
		}
	}
	printf("\nAfter sorting\n");
	for(i=0;i<5;i++)
	printf("%d\t",arr[i]);
	return 0;
}