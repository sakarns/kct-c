//6.Write a program to calculate a raised to power b using user defined function with following prototype int power(int,int).
#include<stdio.h>  
  
int power(int base, int exp)  
{  
    int count, result = 1;  
  
    for(count = 1; count <= exp; count++)  
    {  
        result = result * base;  
    }  
  
    return(result);  
}  
  
int main()  
{  
    int a,b;  
  
    printf("Enter integer values for base and exponent:\n");  
    scanf("%d\n%d", &a, &b);  
  
    printf("%d to the power of %d is %d.", a, b, power(a, b));  
  
    return 0;  
}  