#include<stdio.h>
void modify(int *elem)
{
	int i;
	for (i=0;i<10;i++,elem++)
		*elem *= 3;
}
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10},i;
	modify(arr);
	for (i=0;i<10;i++)
		printf("%d\t",arr[i]);
	return 0;
}