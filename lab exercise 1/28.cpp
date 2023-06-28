#include<stdio.h>
int main()
{
	int i,y,m,d,n,sec,age;
	printf("Enter days: ");
	scanf("%d", &i);
	y=(i/365);
	m=(i-(365*y))/30;
	d=(i-(365*y)-(m*30));
	printf("%dY:%dM:%dD",y,m,d);
	printf("\n\nName: ");
	scanf("%s",&n);
	printf("Section: ");
	scanf("%s",&sec);
	printf("Age: ");
	scanf("%d",&age);
	printf("\nName:%s",n);
	printf("\nSection:%s",sec);
	printf("\nAge:%d",age);
	return 0;
}