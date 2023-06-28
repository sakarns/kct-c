/*Q3. Write a program that accept a string from user and display the content in lower case.*/

#include<stdio.h>
#include<string.h>
int main()
{
	char string[100];
	printf("Enter the string: ");
	scanf("%s",string);
	strlwr(string);
	printf("The string in lowercase is %s.",string);
	return 0;
}