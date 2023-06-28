//9.Write a program that accepts the marks of BCA-II semester student in C-programming.
//Now display the marks in descending order.Also display maximum and minimum marks.
#include<stdio.h>
int main()
{
	int a[100],i,j,n,temp,max,mim;
	printf("Enter Number of Student: ");
	scanf("%d",&n);
	printf("Enter Marks Obtained by students in C-progamming:\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{       
        for(j=i+1;j<n;j++)
		{          
            if(a[i]<a[j])
			{               
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Marks in Decending order: ");
    for(i=0;i<n;i++)
	{
        printf("%d\t",a[i]);
    }
    printf("\n");
    	max=mim=a[0];
	for(i=1;i<n;i++)
	{
		if(mim>a[i])
		mim=a[i];
		if(max<a[i])
		max=a[i];	
	}
	printf("%d is maximun and %d is minimun marks in C-programming.",max,mim);
	return 0;
}
	