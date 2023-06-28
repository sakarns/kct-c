#include <stdio.h>

int main() {
   int num, sum = 0;

   printf("Enter a five-digit number: ");
   scanf("%d", &num);

   // Check that the number is actually five digits
   if (num < 10000 || num > 99999) {
      printf("Invalid input\n");
      return 1;
   }

   // Calculate the sum of the digits
   while (num > 0) {
      sum += num % 10;
      num /= 10;
   }

   printf("The sum of the digits is: %d\n", sum);

   return 0;
}
