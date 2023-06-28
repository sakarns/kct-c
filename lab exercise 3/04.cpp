#include <stdio.h>

int main() {
   int n;

   printf("Enter a positive integer: ");
   scanf("%d", &n);

   if (n <= 0) {
      printf("Invalid input\n");
      return 1;
   }

   printf("The series is: ");

   // Loop from 1 to n-1 and print each fraction
   for (int i = 1; i <= n-1; i++) {
      printf("%d/%d, ", i, i+1);
   }

   printf("\n");

   return 0;
}
