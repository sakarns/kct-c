/*Q8. Write a program to write and read even numbers 
between 10 and 50 to a file named evennumbers.txt in d:\test\evennumbers.txt...*/


#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	int i,c;
	fp=fopen("evennumbers.txt","w");
	if(fp==NULL)
	{
		printf("Cannot create file.");
		exit(0);
	}
	else
	{
		printf("File is created.");
	}
	fputs("Even Numbers from 10 to 50 are:\t",fp);
	for (i = 10; i <= 50; i++) 
	{
		if(i%2 == 0) 
		{
		  fprintf(fp,"%d\t", i);
		}
	}
	printf("\nData is stored in file.");
	fclose(fp);
	fp=fopen("evennumbers.txt","r");
	if(fp==NULL)
	{
		printf("\n\nCannot open file.");
		exit(0);
	}
	else
	{
		printf("\n\nFile is opened.");
	}
	printf("\nEven Numbers from 10 to 50 are:\n ");

	while((c=fgetc(fp))!=EOF)
	{
		putchar(c);
		printf("%c",c);
	}
	fclose(fp);
	return 0;
}           