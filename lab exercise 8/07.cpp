/*Q7.Write a program to convert upper case letter into lower case letter
 using call by address or passing pointer into function.*/

#include <stdio.h>
#include <string.h>
 
void lowercase(char *s)
{
	int i;
	for(i=0;s[i];i++)
	{
		if(s[i]>=65 && s[i]<=90)
		s[i]+=32;
	}
}
int main()
{
	char s[100];
	int i;
	printf("Enter  the string in uppercase: ");
	scanf("%s",s);
	lowercase(s);
	printf("In lowercase: %s\n",s);
	return 0;
}