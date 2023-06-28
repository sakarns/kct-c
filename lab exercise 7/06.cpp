/*Q6. Write a program that accept the string 
and display it in reverse order using and without using strrev( ) function..*/

#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],string[100],temp;
	int i,length;
	printf("Enter the first string: ");
	scanf("%s",str);
	strrev(str);
	printf("Reverse string with strrev():%s.",str);
	printf("\n\n");
	printf("Enter the second string: ");
	scanf("%s",string);
	length=strlen(string)-1;
	for(i=0;i<strlen(string)/2;i++){
      temp=string[i];
      string[i]=string[length];
      string[length--]=temp;
	}
	printf("Reverse string without strrev():%s",string);
	return 0;
}
