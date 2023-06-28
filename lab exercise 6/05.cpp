/*Q5. Write a program that reads different names and address into the computer 
and sorts the names into alphabetical order using structure variables.*/

#include<stdio.h>
#include<string.h>  
struct participant
{
	char name[50];
	char address[100];
}temp;
int main()
{
	int n=5,i,j;
	struct participant p[n];
	for(i=0;i<n;i++)
	{
		printf("Enter Name: ");
		scanf("%s",p[i].name);
		printf("Enter Address: ");
		scanf("%s",p[i].address);
	}
	printf("\nName\tAddress\n");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		if(strcmp(p[j].name,p[i].name)<0)
		{
			temp=p[j]; 
			p[j]=p[i];
			p[i]=temp;
		}}
		printf("%s",p[i].name);
		printf("\t%s",p[i].address);
		printf("\n");
	}
	return 0;
}