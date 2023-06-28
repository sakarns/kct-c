/*Q12. Define a structure called date with three elements day, month and year. 
Write a program to enter the date and print it.*/

#include<stdio.h>
struct date
{
	int day,month,year;
};
int main()
{
	struct date d1;
	printf("Enter Day: ");
	scanf("%d",&d1.day);
	printf("Enter Month: ");
	scanf("%d",&d1.month);
	printf("Enter Year: ");
	scanf("%d",&d1.year);
	printf("\nDate: %d/%d/%d",d1.day,d1.month,d1.year);
	return 0;
}
