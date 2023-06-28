/*Q1. Create a file named test.txt and write some text “Welcome to my college” to the file.*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	fp=fopen("test.txt","w");
	if(fp==NULL)
	{
		printf("Cannot Create file.");
		exit(0);
	}
	else
	{
		printf("File is created.");
	}
	fputs("Welcome to my college.",fp);
	fclose(fp);
	return 0;
}