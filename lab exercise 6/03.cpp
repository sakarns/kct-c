/*Q3. Create a structure named student that has name, roll, marks and remarks as members.
 Assume appropriate types and size of member. 
 Write a program using structure to read and display the data entered by the user.*/
 
 #include<stdio.h>  
struct student
{
	char name[20];
	int roll;
	int marks;
	char remarks[5];
};

int main()
{
	int i,n;
	printf("Enter the numbers of member: ");
	scanf("%d",&n);
	struct student st[n];
	for(i=0;i<n;i++)
	{
		printf("Enter Name: ");
		scanf("%s",st[i].name);
		printf("Enter Roll No: ");
		scanf("%d",&st[i].roll);
		printf("Enter Marks: ");
		scanf("%d",&st[i].marks);
		printf("Enter Remarks: ");
		scanf("%s",st[i].remarks);
	}
	printf("\nRoll\tName\tMarks\tRemarks\n");
	for(i=0;i<n;i++)
	{		
		printf("%d",st[i].roll);
		printf("\t%s",st[i].name);	
		printf("\t%d",st[i].marks);
		printf("\t%s\n",st[i].remarks);
	}
	return 0;
}