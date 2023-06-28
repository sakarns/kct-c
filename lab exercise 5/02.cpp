//2.Write a program to find out the largest among three numbers using user defined function.
#include<stdio.h>
int large(int a, int b, int c)
{
   if(a>=b && a>=c) return a;
   else if(b>=a && b>=c) return b;
   else return c;
}

int main()
{
   int num1, num2, num3, largest;
   printf("Enter three numbers: ");
   scanf("%d %d %d", &num1, &num2, &num3);
   largest = large(num1, num2, num3);
   printf("Largest number = %d",largest);
   return 0;
}