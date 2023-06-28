#include<stdio.h>
int main()
{
	float a,p,l,b;
	printf("Enter length: ");
	scanf("%f",&l);
	printf("Enter Breadth: ");
	scanf("%f",&b);
	printf("Area: %f",l*b);
	printf("\nPerimeter: %f",2*l+2*b);
	return 0;
}