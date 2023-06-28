#include<stdio.h>
int main()
{
	int cp,sp,p,l;
	printf("Enter the cost price: ");
	scanf("%d",&cp);
	printf("Enter the selling price: ");
	scanf("%d",&sp);
	if(sp>cp)
	{
		printf("This is profit of Rs%d",sp-cp);
	}
	else
	{
		printf("This is loss of Rs%d",cp-sp);
	}
	return 0;
}