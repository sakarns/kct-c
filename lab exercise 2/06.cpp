#include<stdio.h>
int main()
{
	int n,m,p,t,c,x,y,z,d1,d2,d3,d,s;
	printf("Enter the order:\n");
	printf("Heater: ");
	scanf("%d",&n);
	printf("Toster: ");
	scanf("%d",&m);
	printf("Fan: ");
	scanf("%d",&p);
	x=(n*1500);
	y=(m*200);
	z=(p*400);	
	c=x+y+z;
	d1=(x*5/100);
	d2=(y*10/100);
	d3=(z*15/100);
	d=d1+d2+d3;
	s=(c-d)*10/100;
	printf("Total Cost:%d",c);
	printf("\nTotal Discount:%d",d);
	printf("\nSales tax:%d",s);
	printf("\nFinal Amount:%d",c-d+s);
	return 0;
}