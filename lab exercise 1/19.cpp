#include<stdio.h>
#include<math.h>
int main()
{
	float area,a,b,c,s;
	printf("Enter three sides of triangle:\n"),
	scanf("%f%f%f",&a,&b,&c);
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("The area of tringle is %f",area);
	return 0;
}