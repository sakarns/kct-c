/*Q3. Write a program to write and read string using character I/O.*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char c;
	fp=fopen("filename.txt","w");
	if(fp==NULL)
	{
		printf("Cannot create file.");
		exit(0);
	}
	else
	{
		printf("File is created.");
	}
	printf("\nEnter Your content until Enter: ");
	while((c=getchar())!='\n')
	{
		fputc(c,fp);
	}	
	fclose(fp);
	fp=fopen("filename.txt","r");
	if(fp==NULL)
	{
		printf("Cannot open file.");
		exit(0);
	}
	else
	{
		printf("File is opened.");
	}
	printf("\nThe text from file is: ");
	while((c=fgetc(fp))!=EOF)
	{
		putchar(c);
	}
	return 0;
}