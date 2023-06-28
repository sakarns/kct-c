#include<stdio.h>
int main()
{
	int no,rem,rev,s=0;
	printf("Enter any Number: ");
	scanf("%d",&no);
	while(no>0)
	{
	    rem=no%10;
	    s=s*10+rem;
	    no=no/10;
    }
	printf("reverse number is %d\n",s);
	return 0;
}                              