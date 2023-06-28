/*Q9.Write a program to find read number of employees, n, working in a company.
Reserve the memory required to store age of employees using malloc() function.
Read age of n employees from user and count the number of employees of age above 80 years.*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
      int *a,n,i,t=0;
      printf("Enter Number of Employee: ");
      scanf("%d",&n);
      a=(int *)malloc(n *sizeof(int));
      printf("\nEnter Ages of  %d employees: \n\n",n);
      for(i=0;i<=n-1;i++)
      {
            scanf("%d", (a+i));
			if(*(a+i)>=80)
			t++;
      }
      
      printf("The total number of employee greater than 80 is: %d",t);
      return 0;
}