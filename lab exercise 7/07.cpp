/*Q7. Write a program that accept a string and display its ascii value.*/

#include<stdio.h>
#include<string.h>
int main() 
{
   char string[50];
   int i=0;
   printf("Enter the Sentence: ");
   scanf("%s",string);
   while(string[i]!='\0')
    {
      printf("\nASCII Value of %c = %d.", string[i], string[i]);
      i++;
	}
	return 0;
}