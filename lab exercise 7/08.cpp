/*Q8. Write a program that determines how many lower case and upper case are in a given string.*/

#include<stdio.h>
#include<string.h>
int main() 
{
	int upper = 0, lower = 0;
	char ch[80];
	int i=0;
	printf("\nEnter The String : ");
	scanf("%s",ch);
	while (ch[i] !='\0')
	{
		if(ch[i] >= 'A' && ch[i] <= 'Z')
    	upper++;
		else if(ch[i] >= 'a' && ch[i] <= 'z')
    	lower++;
		i++;
	}
	printf("There are %d uppercase letter and %d lowercase letter.",upper,lower);
	return (0);
	}