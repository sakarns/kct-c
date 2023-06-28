#include <stdio.h>

int main() {
   int num, rev = 0;

   printf("Enter a five-digit number: ");
   scanf("%d", &num);

   // Check that the number is actually five digits
   if (num < 10000 || num > 99999) {
      printf("Invalid input\n");
      return 1;
   }

   // Reverse the number
   while (num > 0) {
      rev = rev * 10 + num % 10;
      num /= 10;
   }

   printf("The reverse of the number is: %d\n", rev);

   return 0;
}
