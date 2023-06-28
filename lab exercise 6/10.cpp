/*Q10. Create a union named student that has roll and marks as member.
 Assign some value to those members one at a time and display the result one at a time.*/
 
 #include<stdio.h>
 union student
 {
 	char name[20];
 	int roll;
 	int marks;
 };
 int main()
 {
 	union student s;
 	printf("Enter Name: ");
 	gets(s.name);
 	printf("Name:%s",s.name);
 	printf("\nEnter Roll No.: ");
 	scanf("%d",&s.roll);
 	printf("Roll No.:%d",s.roll);
 	printf("\nEnter Marks: ");
	scanf("%d",&s.marks);
 	printf("Marks:%d",s.marks);
 	return 0;
 }