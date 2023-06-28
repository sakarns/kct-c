//3.Write a function which receives a float and int from main(),
//finds the product of these two and returns the product which is printed through main.

#include<stdio.h>
float product(int a,float b)
{
float c;
c=a*b;
return c;
}
main()
{
int x;
float y;
printf("\nEnter an integer: ");
scanf("%d",&x);
printf("Enter a float: ");
scanf("%f",&y);
printf("Product:%.2f\n",product(x,y));
return 0;
}