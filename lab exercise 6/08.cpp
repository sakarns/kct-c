/*Q8. Create a structure named employee which has name, address and salary as members. 
Write a program to read name, address and salary of 10 employee using array of structure. 
Display name of employee which has third highest salary.*/

#include<stdio.h>  
struct employee
{
	char name[20];
	int address[30];
	int salary;
}temp;
int main()
{
	int n=5,i,j;
	struct employee e[n];
	for(i=0;i<n;i++)
	{
		printf("Enter Name: ");
		scanf("%s",e[i].name);
		printf("Enter Address: ");
		scanf("%s",e[i].address);
		printf("Enter Salary: ");
		scanf("%d",&e[i].salary);
		printf("\n");
	}
	for (i = 0; i < n; ++i){
      for (j = i + 1; j < n; ++j){
         if (e[i].salary < e[j].salary){
            temp = e[i];
            e[i] = e[j];
            e[j] = temp;
         }
      }
   }
   printf("Name\tAddress\tSalary\n");
   if(i=2)
   {
   		printf("%s",e[i].name);
		printf("\t%s",e[i].address);
		printf("\t%d",e[i].salary);
		printf("\n");
   }
	return 0;
}