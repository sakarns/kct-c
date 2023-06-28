#include<stdio.h>
int main()
{
      int n,a,b,c,d,e,f,g,h,sum;
      printf("Enter five digit Number: ");
      scanf("%d",&n);
      a=n/10000;  
      b=n%10000;
      c=b/1000;
      d=b%1000;
      e=d/100;
      f=d%100;
      g=f/10;
      h=f%10;
      printf("\nFirst Digit  = %d \nSecond Digit = %d \nThird Digit  = %d \nFourth Digit = %d \nLast Digit   = %d\n",a,c,e,g,h);
      sum=a+c+e+g+h;
      printf("\nSum: %d",sum);
      return 0;
}