#include<stdio.h>
int main()
{
	float a,TSA,LSA;
	printf("Enter Area: ");
	scanf("%f",&a);
	TSA=6*(a*a);
	printf("Total Surface Area: %f",TSA);
	LSA=4*(a*a);
	printf("\nLateral Surface Area: %f",LSA);
	return 0;
}