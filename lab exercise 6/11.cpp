/*Q11 write a program to define a structure Date 
and declare its variable called Date1 and initialize it to February 25, 1957,
in the correct format.*/

#include<stdio.h>
struct date
{
	int yy,mm,dd;
};
int main()
{
	struct date date1;
	date1.dd = 25;
	date1.mm = 2;
	date1.yy = 1957;
	printf("\nDate:%d/%d/%d",date1.mm,date1.dd,date1.yy);
	return 0;	
}