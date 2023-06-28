#include <stdio.h>

int main() {
    int n, i, j;
    double x, sum = 0, term = 1, fact = 1;

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Series: ");

    printf("sum = 1 + x/1!");

    for (i = 2; i <= n; i++) {
        printf(" + x^%d/%d!", i, i);
    }
    printf("\n");


     printf("sum = 1/1!");
     for (i = 1; i <= n; i++) {
        printf(" + %d^%d/%d!", x ,i, i);
    }

    printf("\n");

    for (i = 1; i <= n; i++) {
        term *= x;
        fact *= i;
        sum += term / fact;

        printf("%.2lf", term / fact);

        if (i < n) {
            printf(" + ");
        }
    }

    printf("\nSum: %.2lf", sum);

    return 0;
}
