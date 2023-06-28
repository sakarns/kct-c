/*Q15.Design a air line data structure that store the following:
a)flight number
b)Originating airport code
c)Destination airport code
d)starting time
e)arriving time
Now write a program that prints all the flight information for a specific airport entered by user.*/

#include<stdio.h>
struct air_line
{
	int fl,oac,dac;
	struct
	{
		int min,hr;
	}st,at;
}rout;
int main()
{
	printf("Enter Flight number: ");
	scanf("%d",&rout.fl);
	printf("Enter Originating airport code: ");
	scanf("%d",&rout.oac);
	printf("Enter Destination airport code: ");
	scanf("%d",&rout.dac);
	printf("Enter Starting time in Hour: ");
	scanf("%d",&rout.st.hr);
	printf("Enter Starting time in Minutes: ");
	scanf("%d",&rout.st.min);
	printf("Enter Arriving time in hour: ");
	scanf("%d",&rout.at.hr);
	printf("Enter Arriving time in minute: ");
	scanf("%d",&rout.at.min);
	printf("\nFlight Number:%d",rout.fl);
	printf("\nOriginating airport code:%d",rout.oac);
	printf("\nDestination airport code:%d",rout.dac);
	printf("\nStarting time: %d:%d",rout.st.hr,rout.st.min);
	printf("\nArriving time: %d:%d",rout.at.hr,rout.at.min);
	return 0;
}