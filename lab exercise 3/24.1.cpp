#include <stdio.h>

int main()
{
  int Num, Reminder, Sum;

  printf("\nPlease Enter any value\n");
  scanf("%d", &Num);

  for (Sum=0; Num > 0;Num=Num/10)
  {
     Reminder = Num % 10;
     Sum=Sum+ Reminder;  
  }

  printf("\n Sum of the digits = %d", Sum);
  return 0;
}