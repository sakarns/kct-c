#include<stdio.h>
int main()
{
	int n;
	printf("Enter a digit: ");
	scanf("%d",&n);
    if((n%5==0)&&(n%11!=0))
    {
        printf("Number is divisible by 5 but not by 11.");
    }
    else if((n%5!=0)&&(n%11==0))
    {
    	printf("Number is divisible by 11 but not by 5.");
	}
	else if((n%5==0)&&(n%11==0))
    {
    	printf("Number is divisible by both 5 and 11.");
	}
    else
    {
        printf("Number is not divisible by both 5 and 11.");
    }
    return 0;
}