#include<stdio.h>
int main()
{
	int i,h,m,s;
	printf("Enter Seconds: ");
	scanf("%d", &i);
	h=(i/3600);
	m=(i-(3600*h))/60;
	s=(i-(3600*h)-(m*60));
	printf("%dH:%dM:%dS",h,m,s);
	return 0;
}