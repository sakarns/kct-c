#include<stdio.h>
#define PI 3.141
int main()
{
	float r,a,p;
	printf("Enter Radius: ");
	scanf("%f",&r);
	a=r*r*PI;
	printf("Area: %f",a);
	p=2*PI*r;
	printf("\nCircumference: %f",p);
	return 0;
}