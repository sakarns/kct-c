/*Q4. Write a program that accept a string from user and toggle the case of alphabet.*/

#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	printf("Enter the string: ");
	scanf("%s",str);
	for (int i=0; str[i]!='\0'; i++)
    {
        if (str[i]>='A' && str[i]<='Z')
            str[i] = str[i] + 'a' - 'A';
        else if (str[i]>='a' && str[i]<='z')
            str[i] = str[i] + 'A' - 'a';
	}
	printf("The toggle of string is %s.",str);
	return 0;
}