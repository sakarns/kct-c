/*Q1. Write a program to find length of string input from user
 using and without using library function strlen( ).*/

#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
	char string[100];
	int i,length=0;
	printf("Enter a string: ");
	scanf("%s",string);
	for(i=0;string[i]!='\0';i++)
	{
		length++;
	}
	printf("The length of '%s' is %d.\n",string,length);
	return 0;
}
