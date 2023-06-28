/*Q16. Define a structure Employe and its variable called Person1 and initialize it to “Hari”, 
with a salary of $50,000, who was hired on March 10, 2001.( use structure with in structure)*/

#include<stdio.h>
struct employee
{
	char *name;
	struct
	{
		int day;
		char *month;
		int year;
	}date;
	int salary;
};

int main()
{
	struct employee person1;
	person1.name = "Hari";
	person1.date.day = 10;
	person1.date.month = "March";
	person1.date.year = 2001;
	person1.salary = 50000;
	printf("Name: %s\nHired Date:%s %d,%d\nPaid Salary:$%d",person1.name,person1.date.month,
	person1.date.day,person1.date.year,person1.salary);
	return 0;
}