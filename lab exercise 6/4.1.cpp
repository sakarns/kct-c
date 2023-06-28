/*Q4. Write a program to read the name, address and salary of 5 employee using array of structure. 
Display information of each employee in ascending order of their name.*/
#include<stdio.h>
#include<string.h>
#define MAX 5

struct alphabetic
{
    char name[50];
    char address[100];
}s[MAX], temp;

int main()
{
    int i, j;
    for(i=0; i<MAX; i++)
    {
        printf("\nEnter name: ");
        scanf("%s", s[i].name);
        printf("Enter address: ");
        scanf("%s", s[i].address);

    }
    printf("Name\tAddress\n");
    for(i=0; i<MAX; i++)
    {
        for(j=i+1; j<MAX; j++)
        {
            if(strcmp(s[j].name, s[i].name)<0)
            {
                temp = s[j];
                s[j] = s[i];
                s[i] = temp;
            }
        }
        printf("%s\t%s\n", s[i].name, s[i].address);
    }
    return 0;
}