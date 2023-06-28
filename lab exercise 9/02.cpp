/*Q2. Write a program to open file “test.txt” created in previous question, read its content and display it on screen*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char s[50];
	fp=fopen("test.txt","r");
	if(fp==NULL)
	{
		printf("Cannot open file.");
		exit(0);
	}
	else
	{
		printf("File is opened.");
	}
	fgets(s,25,fp);
	printf("\nThe text from file is '%s'", s);
	fclose(fp);
	return 0;
}