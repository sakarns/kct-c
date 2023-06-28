/*Q7. Write a program to store string to the data file “new1.dat” 
and display the same content on the monitor reading from the data file.*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	fp = fopen("new.dat", "wb");

char str[10] = " Hello\0";
printf("%s\n", str);    
fwrite(&str, sizeof(str), 1, fp);
fclose(fp);

fp = fopen("new1.dat", "rb");  
fread(&str, sizeof(str), 1, fp);

fclose(fp); 
return 0;
}