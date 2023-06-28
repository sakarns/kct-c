/*Q4. Write a program to append some text to a certain file. Take name from user.*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char fn[20];
	char c;
	printf("Enter filename: ");
	scanf("%s",fn);
	fp=fopen(fn,"a");
	if(fp==NULL)
	{
		printf("Cannot create file.");
		exit(0);
	}
	else
	{
		printf("File is created.");
	}
	printf("\nEnter text to append to file %s is:\n",fn);
	while((c=getchar())!='\n')
	{
		fputc(c,fp);
	}	
	fclose(fp);
	return 0;
}