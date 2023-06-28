#include<stdio.h>
int main()
{
	int n,sum=0,x=10,m;
	n=10;
	printf("The number from 10 to 1 are:\n");
	while(n>=1)
	{
	printf("%d\t",n);
	n--;
	}
	printf("\n\n");
	while (x>=0) 
	{
        sum=sum+x;    
        x--;    
    }
    
    printf ("The sum is %d.",sum);
	return 0;
}