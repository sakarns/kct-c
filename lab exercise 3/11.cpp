#include<stdio.h>
#define marco_name for( ; ; ) 
int main()  
{
	int n;
	printf("Choose Option for Infinite Loops: ");
	printf("\n1.For loop: ");
	printf("\n2.While loop: ");
	printf("\n3.Do-While loop: ");
	printf("\n4.goto-statement: ");
	printf("\n5.Marcos: ");
	printf("\n\nEnter Option: ");
	scanf("%d",&n);
	switch (n)
	{
		case 1:
			{
				for( ; ;)
				{
					printf("Hello World\t"); 
				}
			}
		break;
		
		case 2:
			{
				while(1)
				{
					printf("Hello World\t");
				}
			}
		break;
		
		case 3:
			{
				do
				{
					printf("Hello World\t");
				}while(1);
			}
		break;
		
		case 4:
			{
				l1:printf("Hello World\t");
				goto l1;
			}
		break;
		
		case 5:
			{
				marco_name
				{
					printf("Hello World\t");
				}
			}
		break;
	}
	return 0;  
}  
