#include<stdio.h>
int main()
{
	float l,mm,cm,m,km;
	printf("Enter the lehgth in mm: ");
	scanf("%fmm",&l);
	printf("In Centimeter: %fcm",l/10);
	printf("\nIn Meter: %fm",l/100);
	printf("\nIn Kilometer: %fKm",l/1000);
	return 0;
}