#include <stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	float root1,root2,imaginary,discriminant;
	printf("Enter the coefficient 'a': ");
	scanf("%f",&a);
	printf("Enter the coefficient 'b': ");
	scanf("%f",&b);
	printf("Enter the coefficient 'c': ");
	scanf("%f",&c);
  	discriminant =(b*b)-(4*a*c);
  	if(discriminant>0)
  	{
  		root1 =(-b+sqrt(discriminant)/(2*a));
  		root2 =(-b-sqrt(discriminant)/(2*a));
		printf("\nTwo Distinct Real Roots Exists:root1=%.2f and root2=%.2f",root1,root2);
  	}
  	else if(discriminant==0)
  	{
  		root1=root2=-b/(2 * a);
  		printf("\nTwo Equal and Real Roots Exists:root1=%.2f and root2=%.2f",root1,root2);
  	}
  	else if(discriminant<0)
  	{
  		root1=root2=-b/(2 * a);
  		imaginary= sqrt(-discriminant)/(2 * a);
  		printf("\nTwo Distinct Complex Roots Exists:root1=%.2f+%.2f and root2=%.2f-%.2f",root1,imaginary,root2,imaginary);
  	}
	return 0;
}