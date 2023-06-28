/*Q6.Write a program to add two matrices using pointers( m by n size matrix).*/

#include<stdio.h>
int  main()
{
	int a[5][5],b[5][5],c[5][5],i,j,m,n;
	printf("Enter m & n:\n");
	scanf("%d %d",&m,&n);
	printf("Enter 1st matrix:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",(*(a+i)+j));
		}
	}
	printf("\nEnter 2nd matrix:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",(*(b+i)+j));
		}
	}
	printf("\nAddition Matrix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			*(*(c+i)+j)=*(*(a+i)+j)+ *(*(b+i)+j);
			printf("%d ",*(*(c+i)+j));
		}
		printf("\n");
	}
	return 0;
}