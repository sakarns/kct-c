//8.Write a program to calculate sum of the series 1+2+3+4+............+n using recursive function.

#include<stdio.h>
int series(int n);
int rseries(int n);

int main( )
{
    int n;
    printf("Enter number of terms : ");
    scanf("%d", &n);
    printf("\n\b\b Using Recursion: \n");
    printf("\b\b = %d\n",rseries(n));
    return 0;
}
int rseries(int n)
{
        int sum;
        if(n == 0)
        return 0;
        sum = (n + rseries(n-1));
        printf("%d + ",n);
        return sum;
}