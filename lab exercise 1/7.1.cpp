#include<stdio.h>
int main()
{
	int a,TSA,LSA;
	printf("Enter Area: ");
	scanf("%d",&a);
	TSA=6*(a*a);
	printf("Total Surface Area: %d",TSA);
	LSA=4*(a*a);
	printf("\nLateral Surface Area: %d",LSA);
	return 0;
}