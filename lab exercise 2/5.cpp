#include<stdio.h>
int main()
{
	int n,c,s,r;
	printf("Enter Total Sales: ");
	scanf("%d",&s);
	if(s<5000)
	{
		r=1;
		c=s*1/100;
	}
	else if(s<5000 && s>8000)
	{
		r=3;
		c=s*3/100;
	}
	else if(s<8000 && s>1100)
	{
		r=5;
		c=s*5/100;
	}
	else
	{
		r=10;
		c=s*10/100;
	}
	printf("The commission rate is:%d%%.",r);
	printf("\nEarned Amount is%d.",c);
	return 0;
}