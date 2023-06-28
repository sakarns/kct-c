#include<stdio.h>
int main()
{
	int num,fd,ld,sum;
	printf("Enter the number: ");
	scanf("%d",&num);
	ld=num%10;
	while(num>10)
	{
		num=num/10;
	}
	fd=num;
	printf("the sum of first and last digit is %d",ld+fd);
	return 0;
}