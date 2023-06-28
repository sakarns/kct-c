/*Q9.You are to use the given data. Instead of asking user to enter data, you may wish to use these data to initialize structs.

Roll.	 Name 			Phy 	Math 	Che 	Bio 	Pro 	Eng
1. Krishna K. Kunwar	32 		42		45		23		39		12
2. Basant B. Bhandari 	45 		28 		35 		43 		46 		42
3. Chitra L. Chetri 	13 		24 		12 		32 		32 		31
4. Mohan M. Pradhan 	30 		42 		45 		23 		39 		47
5. Asha R. Pun 			12 		34 		24 		43 		23 		23

i. Find the average marks of Krishna K. Kunwar.
ii. Find the average marks in programming.
iii. Find in how many subjects Chitra L. Chetri failed.
iv. Find who performed best.
v. Display the data in exact format as shown above.*/

#include<stdio.h>
struct student
{
	char name[100];
	int roll;
	int marks;
	struct 
	{
		int phy;
		int math;
		int che;
		int bio;
		int pro;
		int eng;
	}m;
}s;
int main()
{
	int i,j,ave,m,f,a[100];
	s.roll[4]={1,2,3,4,5}
	s.name[4]={Krishna,Bashant,Chitra,Mohan,Asha};
	
	return 0;	
}