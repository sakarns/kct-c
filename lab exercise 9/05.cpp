/*Q5. Write a program to create a file named student .txt in d:\test\ drive
and write name, roll, address and marks of a student to this file.*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char name[20];
	int roll;
	char address[20];
	float marks;
	fp=fopen("student.txt","w");
	if(fp==NULL)
	{
		printf("Cannot create file.");
		exit(0);
	}
	else
	{
		printf("File is created.");
	}
	printf("\nEnter Name: ");
	scanf("%s",name);
	printf("Enter Roll No.: ");
	scanf("%d",&roll);
	fflush(stdin);
	printf("Enter Address: ");
	scanf("%s",address);
	printf("Enter Marks: ");
	scanf("%f",&marks);
	printf("\n\nNow writing data to file...");
	fprintf(fp,"Name= %s\nRoll No= %d\nAddress= %s\nMarks=%.2f",name,roll,address,marks);
	printf("\nData Entered Compleated!!!");
	fclose(fp);
	return 0;
}
