#include<stdio.h>
int main()
{
	int s,n,m,e,c,i,p;
	printf("Enter Marks Obtain:\n");
	printf("Science: ");
	scanf("%d",&s);
	printf("Math: ");
	scanf("%d",&m);
	printf("Nepali: ");
	scanf("%d",&n);
	printf("English: ");
	scanf("%d",&e);
	printf("Computer: ");
	scanf("%d",&c);
	p=(s+m+n+e+c)/5;
	if(p>80)
	{
		printf("Percentage:%d%%",p);
		printf("Remarks:Distinction");
	}
	else if(p>60,p<80)
	{
		printf("Percentage:%d%%",p);
		printf("Remarks:First Division");
	}
	else if(p>40,p<60)
	{
		printf("Percentage:%d%%",p);
		printf("\nRemarks:Pass");
	}
	else
	{
		printf("Percentage:%d%%",p);
		printf("Remarks:Fail");
	}
	return 0;	
}