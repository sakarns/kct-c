#include<stdio.h>
int main()
{
	int x,y,addition,subtraction,multiplication,division;
	printf("Enter the value of x: ");
	scanf("%d",&x);
	printf("Enter the value of y: ");
	scanf("%d",&y);
	printf("Addition: %d",x+y);
	printf("\nSubtraction: %d",x-y);
	printf("\nMultiplication: %d",x*y);
	printf("\nDivision: %d",x/y);	
	return 0;
}