  /*Q6.Create a structure named book which has name, pages and price as member variables.
Read name of book, its pages and price as member variables.
Finally display these members value.
Use pointer to structure instead of structure itself to access member variable.*/

#include<stdio.h>  
struct book
{
	char name[20];
	int pages;
	int price;
}b;
int main()
{
	printf("Enter Book Name: ");
	scanf("%s",b.name);
	printf("Enter No of Pages: ");
	scanf("%d",&b.pages);
	printf("Enter Price: ");
	scanf("%d",&b.price);
	struct book *ab;
	ab=&b;
	printf("\nName\tPages\tPrice\n");
	printf("%s",ab->name);
	printf("\t%d",ab->pages);
	printf("\t%d",ab->price);
	printf("\n");
	return 0;
}