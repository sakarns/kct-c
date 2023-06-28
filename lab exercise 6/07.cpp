/*Q7. Create a structure named book which has members name, pages and price. 
Write a program to read name, no of pages and price of 5 books using array of structure.
Display the name, no of pages and price of most expensive book.*/

#include<stdio.h>  
struct book
{
	char name[20];
	int pages;
	int price;
};
int main()
{
	int n=5,i,j;
	struct book b[n];
	for(i=0;i<n;i++)
	{
		printf("Enter Book Name: ");
		scanf("%s",b[i].name);
		printf("Enter No of Pages: ");
		scanf("%d",&b[i].pages);
		printf("Enter Price: ");
		scanf("%d",&b[i].price);
		printf("\n");
	}
	printf("\nName\tPages\tPrice\n");
	for(i=0;i<n;i++)
	{
		if(b[0].price<b[i].price)
		{
			b[0]=b[i];
		}
	}
	printf("%s",b[0].name);
	printf("\t%d",b[0].pages);
	printf("\t%d",b[0].price);
	printf("\n");
	return 0;
}