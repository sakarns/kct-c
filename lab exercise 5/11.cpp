/*11.Write a recursive function to determine the factorial of a given number, 
write a program to calculate the value of the following finite series.
Sum=1+(x/1!)+(x^2/2!)+(x^3/3!)+...............up to n terms.*/

#include <stdio.h>
#include<math.h>
int sum(int x, int n)
{
    int i=1,j,fact=1;
	double total=1.1;
    while(i<=n)
    {
        for(j=1;j<=i;j++)
		{
            fact*=j;
            total+=pow(x,i)/fact;
        }
        i++;
    }
    return 1;
}
int main()
{
    int x,n;
    printf("Enter x: ");
    scanf("%d",&x);
    printf("Enter n: ");
    scanf("%d",&n);
    int sum(int x,int y);
    printf("%d",sum);
    return 0;
}