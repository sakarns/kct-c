/*Q4. Write a program to print the size of pointers that holds 
the address of three different type variables: int, float, char*/

#include<stdio.h>
int main()
{
	char c='N';
	int x=2;
	double y=3.14;
	printf("Size of character: %d byte",sizeof(c));
	printf("\nSize of int: %d bytes",sizeof(x));
	printf("\nSize of float: %d bytes",sizeof(float));
	printf("\nSize of double: %d bytes",sizeof(y));
	return 0;
}