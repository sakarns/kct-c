#include<stdio.h>
int main()
{
	int n=65,s=1,i,j,k,l;
	for(i=1;i<=6;i++)
	{
		printf("%c ",n);
		n++;
	}
	printf("%c ",n);
	n--;
	for(j=1;j<=6;j++)
	{
		printf("%c ",n);
		n--;
	}
	printf("\n\n");
	for(i=6;i>=1;i--)
	{
		n=65;
		for(j=1;j<=i;j++)
		{
			printf("%c ",n);
			n++;
		}
		n--;
		for(k=1;k<=s;k++)
		{
			printf("  ");
		}
		for(l=1;l<=i;l++)
		{
			printf("%c ",n);
			n--;
		}
		s=s+2;
		printf("\n\n");
	}
	return 0;
}