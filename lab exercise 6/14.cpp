/*Q14. Define a structure called date with three elements day, month and year. 
Write a program to enter the two date and print the difference.*/

#include<stdio.h> 
#include<stdlib.h>

struct date
{
    int day1, mon1, year1,day2, mon2, year2;
    int day_diff, mon_diff, year_diff;  
};
int main()
{
	struct date d;
    printf("Enter 1st date (MM/DD/YYYY): ");
    scanf("%d/%d/%d", &d.mon1, &d.day1, &d.year1);

    printf("Enter 2nd date (MM/DD/YYYY): ");
    scanf("%d/%d/%d", &d.mon2, &d.day2, &d.year2);

    if(d.day2 < d.day1)
    {      
        if (d.mon2 == 3)
        {
            if ((d.year2 % 4 == 0 && d.year2 % 100 != 0) || (d.year2 % 400 == 0)) 
            {
                d.day2 += 29;
            }

            else
            {
                d.day2 += 28;
            }                        
        }
        else if (d.mon2 == 5 || d.mon2 == 7 || d.mon2 == 10 || d.mon2 == 12) 
        {
           d.day2 += 30; 
        }
        else
        {
           d.day2 += 31;
        }

        d.mon2 = d.mon2 - 1;
    }

    if (d.mon2 < d.mon1)
    {
        d.mon2 += 12;
        d.year2 -= 1;
    }       

    d.day_diff = d.day2 - d.day1;
    d.mon_diff = d.mon2 - d.mon1;
    d.year_diff = d.year2 - d.year1;

    printf("Difference: %d years %02d months and %02d days.", d.year_diff, d.mon_diff, d.day_diff);

    return 0;
}