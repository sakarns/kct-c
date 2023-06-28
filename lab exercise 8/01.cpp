/*Q1.write a program which defines three variables of different types: char, float and int.
 Dispalys the memory address reserved by these variables.*/
 
 #include<stdio.h>
 #include<conio.h>
 int main()
 {
 	int x=10,*p;
 	char *y = "sakar",*q;
 	float z= 10.5,*r;
 	p=&x;
	printf("The address of x is %u.",p);
 	q=y;
 	printf("\nThe address of y is %u.",q);
 	r=&z;
 	printf("\nThe address of z is %u.",r);
 	return 0;
 }