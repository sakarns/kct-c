#include <stdio.h>

int main() {
   int num1, num2, result;

   printf("Enter the first number: ");
   scanf("%d", &num1);

   printf("Enter the second number: ");
   scanf("%d", &num2);

   // Use the ternary operator to determine whether to add or subtract
   result = (num1 > num2) ? (num1 + num2) : (num2 - num1);

   // Print the result
   if (num1 > num2) {
      printf("The sum of the numbers is: %d\n", result);
   } else {
      printf("The difference of the numbers is: %d\n", result);
   }

   return 0;
}
