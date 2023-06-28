/*Q13. Declare a structure template that holds student access information into the student registration system. 
It should hold the 8 character student username, the student 9 character Id number, and the student 5 digit pin number.
Write a program that ask the student information and display them to user.*/

#include<stdio.h>
struct templete
{
	char name[20];
	char id[10];
	int pin;
};

int main()
{
	struct templete srs;
	printf("Enter Name: ");
	scanf("%s",&srs.name);
	printf("Enter ID: ");
	scanf("%s",&srs.id);
	printf("Enter PIN: ");
	scanf("%d",&srs.pin);
	printf("\nYour name is %s.",srs.name);
	printf("\nYour ID is %s.",srs.id);
	printf("\nYour PIN is %d.",srs.pin);
	return 0;
}