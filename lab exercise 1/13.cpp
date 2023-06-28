#include<stdio.h>
int main()
{
	int i,y,m,d;
	printf("Enter days: ");
	scanf("%d", &i);
	y=(i/365);
	m=(i-(365*y))/30;
	d=(i-(365*y)-(m*30));
	printf("%dY:%dM:%dD",y,m,d);
	return 0;
}