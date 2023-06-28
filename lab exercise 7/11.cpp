/*Q12. Write a program to concatenate two strings without using string handling built in function.*/

#include <stdio.h>
#include <string.h>
int main()
{
  	char str1[100], str2[100];
  	int i, j;
 
  	printf("Please Enter the First String :  ");
  	scanf("%s",str1);
  	
  	printf("Please Enter the Second :  ");
  	scanf("%s",str2);

        // To iterate First String from Start to end  
  	for (i = 0; str1[i]!='\0'; i++);

        // Concatenating Str2 into Str1  	
  	for (j = 0; str2[j]!='\0'; j++, i++)
  	{
  		str1[i] = str2[j];
  	}
  	str1[i] = '\0';

  	printf("\nAfter the Concatenate = %s", str1);
  	
  	return 0;
}