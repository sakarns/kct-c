#include<stdio.h>
int main()
{
	int eng=100,math=100,sci=100,com=100,nep=100,Total=500,Percentage=100;
	printf("Grade Sheet,2nd Semester");
	printf("\n\nName:Sakar Mainali");
	printf("\nRoll No.:12");
	printf("\n\n");
	printf("Subjects:Marks Obtained\n");
	printf("English: ");
	scanf("%3d",&eng);
	printf("Mathematics: ");
	scanf("%3d",&math);
	printf("Science: ");
	scanf("%3d",&sci);
	printf("Computer: ");
	scanf("%3d",&com);
	printf("Nepali: ");
	scanf("%3d",&nep);
	printf("\nTotal=%d\n",Total=eng+math+sci+com+nep);
	printf("Percentage=%d%%",Percentage=Total/5);
	printf("\n");
	if(Percentage>90)
	{
		printf("Grade=A+");
		printf("\nResult=Pass");
	}
	else if(Percentage>80)
	{
		printf("Grade=A");
		printf("\nResult=Pass");
	}
	else if(Percentage>70)
	{
		printf("Grade=B+");
		printf("\nResult=Pass");
	}
	else if(Percentage>60)
	{
		printf("Grade=B");
		printf("\nResult=Pass");
	}
	else if(Percentage>50)
	{
		printf("Grade=C+");
		printf("\nResult=Pass");
	}
	else if(Percentage>40)
	{
		printf("Grade=C");
		printf("\nResult=Pass");
	}
	else if(Percentage>30)
	{
		printf("Grade=D");
		printf("\nResult=Pass");
	}
	else
	{
		printf("Grade=E");
		printf("Result=Fail");
	}
	return 0;
}