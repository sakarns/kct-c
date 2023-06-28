/*Q10. Write a program to compare two strings and display larger one.*/

#include <stdio.h>  
#include<string.h>  
int main()  
{  
   char str1[20];  // declaration of char array  
   char str2[20];  // declaration of char array  
   int value; // declaration of integer variable  
   printf("Enter the first string : ");  
   scanf("%s",str1);  
   printf("Enter the second string : ");  
   scanf("%s",str2);  
   // comparing both the strings using strcmp() function  
   value=strcmp(str1,str2);  
   if(value>0)  
   printf("%s",str1);  
   else if(value==0) 
   printf("Both are Same."); 
   else if(value<0)
   printf("%s",str2);
   return 0;  
} 