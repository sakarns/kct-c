/*Q5. Write a program to exchange to value using the pointer. (Call by address)*/

#include <stdio.h>
int main()
{
	int num1, num2,temp,*x,*y;
	x=&num1;
	y=&num2;
	printf("Please Enter the First Value to Swap  = ");
	scanf("%d", &num1);
	printf("Please Enter the Second Value to Swap = ");
	scanf("%d", &num2);
	printf("\nBefore Swapping: num1 = %d  num2 = %d\n", num1, num2);
	temp = *x;
	*x = *y;
	*y = temp;
	printf("After Swapping : num1 = %d  num2 = %d\n", num1, num2);
	return 0;
}