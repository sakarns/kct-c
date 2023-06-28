//16.Write a program to copy contents of one array into another in reverse order.
#include<stdio.h>
int main()
{
	int a[5],b[5],i,j;
	printf("Enter 5 integer numbers:\n");  
    for(i=0;i<5;i++)
	scanf("%d",&a[i]); 
	printf("\nCopying elements from array a to b, in reverse order\n");  
    for(i=5-1,j=0;i>=0;i--,j++)
	b[j]=a[i];
	printf("\nOriginal(a[%d])-->Copy(b[%d])\n",5,5);  
    for(i=0;i<5;i++)  
    printf("%4d\t\t-->%6d\n",a[i],b[i]);  
    return 0; 
}  