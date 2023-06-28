//10.Twenty-five numbers are entered through the keyboard into an array.
//Write a program to find out how many of them are positive, how many are negative,
//how many are even and how many are odd.
#include<stdio.h>
int main()
{
	int a[25],i,p=0,n=0,e=0,o=0;
	printf("Enter 25 numbers: ");
	for(i=1;i<=25;i++)
	{
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=1;i<=25;i++)
	{
		if(a[i]>0)
		p++;
		else if(a[i]<0)
		n--;
	}
	for(i=1;i<=25;i++)
	{
		if(a[i]%2==0)
		e++;
		else if(a[i]%2!=0)
		o++;
	}
	printf("Positive Number:%d",p);
	printf("\nNegative Number:%d",n);
	printf("\nEven Number:%d",e);
	printf("\nOdd Number:%d",o);
	return 0;
}
                                                                                      
 
  
      