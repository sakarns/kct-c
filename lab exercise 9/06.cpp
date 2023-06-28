/*Q6. Write a program read name, address, and telephone, save it in a file and display them on the screen.*/


#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char name[100];
	char address[100];
	int telephone;
	fp=fopen("info.txt","w");
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
	fflush(stdin);
	printf("Enter Address: ");
	scanf("%s",address);
	fflush(stdin);
	printf("Enter Telephone Number: ");
	scanf("%d",&telephone);
	fflush(stdin);
	printf("\nNow writing data to file...");
	fprintf(fp,"Name= %s\nAddress= %s\nTelephone=%d",name,address,telephone);
	printf("\nData Entered Compleated!!!");
	fclose(fp);
	fp=fopen("info.txt","r");
	if(fp==NULL)
	{
		printf("\nCannot open file.");
		exit(0);
	}
	else
	{
		printf("\nFile is opened.");
	}
	printf("\nNow reading data from file...\n");
	fscanf(fp,"Name= %s\nAddress= %s\nTelephone=%d",&name,&address,&telephone);
	printf("\nName= %s\nAddress= %s\nTelephone= %d",name,address,telephone);
	fclose(fp);
	return 0;
}
