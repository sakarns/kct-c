#include <stdio.h>
int main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c",&ch);
    if(ch>=97&&ch<=122)
    {
        printf("'%c' is a small letter.",ch);
    }
    else if(ch>=65&&ch<=90)
    {
    	printf("'%c' is a capital letter.",ch);
	}
    else if(ch>=48&&ch<=57)
    {
        printf("'%c' is a digit.",ch);
    }
    else
    {
        printf("'%c' is a special symbol.",ch);
    }
    return 0;
}