#include<stdio.h>
int main()
{
	float km,m,cm,mm;
	printf("Enter Kilometer: ");
	scanf("%f",&km);
	printf("In Milimeter: %fmm",km*10000000);
	printf("\nIn Centimeter: %fcm",km*100000);
	printf("\nIn Meter: %fm",km*1000);
	return 0;
}