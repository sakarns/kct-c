#include<stdio.h>
int main()
{
	int i,p=0,n=0,z=0,l;
	printf("Enter the Limits: ");
	scanf("%d",&l);
	printf("\nEnter the %d Numbers:\n",l);
	while(l)
	{
		scanf("%d",&i);
		if(i>0)
		{
			p++;
		}
		else if(i<0)
		{
			n++;
		}
		else
		{
			z++;
		}
		l--;
	}
	printf("\nPositive Numbers: %d\n",p);  
    printf("Negative Numbers: %d\n",n);  
    printf("Number of Zero  : %d\n",z); 
	return 0;
}