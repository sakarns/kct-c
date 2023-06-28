#include<stdio.h>
int main()
{
	float r,v;
	printf("Enter Radius: ");
	scanf("%f",&r);
	v=(4*3.14*r*r*r)/3;//v=4/3PI.r^3//
	printf("volume of sphere is %f",v);
	return 0;
}