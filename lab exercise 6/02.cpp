/*Q2. Write a program to display the following data in proper manner using structure.
Name Total Marks Grade
Ram 	100 		C
Sita	120	 		B
Gita 	130 		B
Gopal 	150 		A */

#include<stdio.h>  
struct student
{
	char name[20];
	int marks;
	char grade[5];
};

int main()
{
	int i,n=4;
	struct student st[n];
	for(i=0;i<n;i++)
	{
		printf("Enter Name: ");
		scanf("%s",st[i].name);
		printf("Enter Marks: ");
		scanf("%d",&st[i].marks);
		printf("Enter Grade: ");
		scanf("%s",st[i].grade);
	}
	printf("\nName\tMarks\tGrade\n");
	for(i=0;i<n;i++)
	{
		printf("%s",st[i].name);
		printf("\t%d",st[i].marks);
		printf("\t%s",st[i].grade);
		printf("\n");
	}
	return 0;
}