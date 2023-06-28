//17.Write a program which performs following tasks.
//-initialize an integer array of 10 elements in main()
//-pass the entire array to a function modify( )
//-in modify ( )multiply each element of array by 3 and print the new array.
#include<stdio.h>
void modify(int *,int);

int main()

{

int i,arr[10]={1,2,3,4,5,6,7,8,9,10};

modify(&arr[0],10);

for(i=0;i<10;i++)

printf("%d\t",arr[i]);

return 0;

}

void modify(int *j,int n)

{

int i;

for(i=0;i<n;i++)

{

*j=*j*3;

j++;

}}