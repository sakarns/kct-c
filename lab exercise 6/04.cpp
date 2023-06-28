/*Q4. Write a program to read the name, rollno and mark of 5 students using array of structure.
 Display the name and rollno of those students whose mark is greater than 50.*/
 
#include<stdio.h>  
struct student
{
	char name[20];
	int roll;
	int marks;
};

int main()
{
	int i,n=5;
	struct student st[n];
	for(i=0;i<n;i++)
	{
		printf("Enter Name: ");
		scanf("%s",st[i].name);
		printf("Enter Roll: ");
		scanf("%d",&st[i].roll);
		printf("Enter Marks: ");
		scanf("%d",&st[i].marks);
	}
	printf("\nName\tRoll\tMarks\n");
	for(i=0;i<n;i++)
	{
		if(st[i].marks>50)
		{
			printf("%s",st[i].name);
			printf("\t%d",st[i].roll);
			printf("\t%d",st[i].marks);
			printf("\n");
		}
	}
	return 0;
}