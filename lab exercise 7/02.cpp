/*Q2. Write a program that accept a string from user and display the content in upper case*/

#include<stdio.h>
#include<string.h>
int main()
{
	char string[100];
	printf("Enter the string: ");
	scanf("%s",string);
	strupr(string);
	printf("The string in uppercase is %s.",string);
	return 0;
}