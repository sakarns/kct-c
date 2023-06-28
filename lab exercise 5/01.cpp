//1.Write a program to accept two numbers perform addition, subtraction, multiplication, division 
//between them  using user defined function called add( ), sub( ), div( )and mul( ).

#include <stdio.h>
int add(int num1, int num2)
{
    int sum = num1 + num2;
    return sum;
}
int sub(int num1, int num2)
{
    int subtract = num1-num2;
    return subtract;
}
int mul(int num1, int num2)
{
    int multiply = num1 * num2;
    return multiply;
}
double div(int num1, int num2)
{
    double division = (double)num1/(double)num2;
    return division;
}
int main()
{
    int num1, num2;
    printf("Enter the Two Numbers:");
    scanf("%d%d", &num1, &num2);

    int addition = add(num1, num2);
    int subtract = sub(num1, num2);
    int multiply = mul(num1, num2);
    double division = div(num1, num2);

    printf("Addition of two Numbers is: %d\n", addition);
    printf("Subtraction of two Numbers is: %d\n", subtract);
    printf("Multiplication of two Numbers is: %d\n", multiply);
    printf("Division of two Numbers is: %0.2lf\n", division);
    return 0;
}b