#include<stdio.h>
int main()
{
	int i,num,num1;
	printf("Table of: ");
	scanf("%d",&num);
	printf("Table upto: ");
	scanf("%d",&num1);
	for(i=1;i<=num1;i++)
	{
		printf("%d*%d=%d\n",num,i,(num*i));
	}
	return 0;
}
