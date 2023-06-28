#include <stdio.h> 
int main()
{ 
    char ch='A',ch1;
    int i,j,n=7;
    for (int i=0;i<n;i++)
	{
		for (int j='A';j<'A'+(2*n)-1;j++)
		{
			if (j>=('A'+n-1)+i)
			printf("%c",(char)(('A'+n-1)-(j%('A'+n-1))));
			else if (j<=('A'+n-1)-i)
			printf("%c",(char)j);
			else
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}