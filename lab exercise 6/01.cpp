//Q1. Define a struct called name with members as 
//{char f_name[20]; char mi_name; char s_name[10]. Now declare one variable of this type.

#include<stdio.h>
#include <string.h>   
struct name
{
	char f_name[20];
	char mi_name[10];
	char s_name[10];
}n;

int main()
{
	strcpy(n.f_name,"Sakar");
	strcpy(n.mi_name,"Prasad");
	strcpy(n.s_name,"Mainali");
	printf("Full Name: %s %s %s",n.f_name,n.mi_name,n.s_name);
	return 0;
}