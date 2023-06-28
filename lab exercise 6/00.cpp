#include<stdio.h>  
int main()
{
	int a[50],i,j,n=5,temp=0;
	for(i=0;i<n;i++)
	{
		printf("Enter Age: ");
		scanf("%d",&a[i]);
	}
	for (i = 0; i < n; ++i){
      for (j = i + 1; j < n; ++j){
         if (a[i] < a[j]){
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
         }
      }
   }
    printf("\n");
	printf("The second largest age is:%d",a[1]);
	return 0;
}