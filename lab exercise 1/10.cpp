#include<stdio.h>
int main()
{
	int a,b,q,r;
	printf("Enter Divident: ");
	scanf("%d",&a);
	printf("Enter Divisor: ");
	scanf("%d",&b);
	q=a/b;
	r=a-(b*q);
	printf("Quotient: %d",q);
	printf("\nReminder: %d",r);
	return 0;
}