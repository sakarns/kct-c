//a.Write a program that accepts marks of BCA-IIsemester students in C-programming 
//(say we have 22 students in BCA-II semester). 
//b.Find and print how many students failed (pass marks is 25) 
//and how many achieved distinction (45 above is considered distinction.)
#include<stdio.h>
int main()
{
	int a[50],n,i,d=0,p=0,f=0;
	printf("Enter Number of Student: ");
	scanf("%d",&n);
	printf("Enter Total Marks Obtained by students in C-programming:\n");
	for(i=1;i<=n;i++)
	{
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
		if(a[i]>80)
		{
			printf("Distinction.\n");
			d++;
		}
	
		else if(a[i]>=40)
		{
			printf("Pass.\n");
			p++;
		}
		else
		{
			printf("Fail.\n");
			f++;
		}
	}
	printf("\nNumber of student obtain Distinction is %d.\nNumber of student obtain pass marks is %d.\nNumber of student who failed is %d.\n",d,p,f);
	return 0;
}