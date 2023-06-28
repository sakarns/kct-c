/*Q5. Write a program that determines the string is palindrome or not.*/

#include <stdio.h>
#include <string.h>

int main()
{
    char a[20],b[20];
    printf("Enter a string: ");
    scanf("%s",a);
    strcpy(b,a);
    strrev(b);
    if (strcmp(a,b)==0) {
        printf("'%s' is a palindrome",a);
    }    
    else {
        printf("'%s' is not a palindrome",a);
    }
    return 0;
}