#include<stdio.h>
int main()
{
	float celsius,fahren;
	printf("Enter Temperature: ");
	scanf("%f",&fahren);
	celsius=((fahren-32)/1.8);
	printf("%.2f Fahrenheit = %.2f Celsius",fahren,celsius);
	return 0;
}