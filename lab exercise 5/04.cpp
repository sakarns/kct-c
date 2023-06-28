//4.Write aprogram to check whether the given number is prime or not using user defined function

#include <stdio.h> 
int main() 
{
    int p,prime();
    p=prime();
    return 0;    
}
int prime()
{
	int i,c=0,n;
	printf("Enter any number\n");
    scanf("%d",&n);
    for(i=1;i<= n;i++)
    {
        if (n%i==0) 
        {
            c++;
        }
    }
    if(c==2)
    {
  	    printf("\n%d is a Prime number",n);
    }
    else 
    {
     printf("\n%d is not a Prime number",n);
    }
return c;
}