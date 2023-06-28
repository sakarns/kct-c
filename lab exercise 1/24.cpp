#include<stdio.h>
int main()
{
	int i=0,rem=0,hex,oct=0,dec=0,temp=1;
	printf("Enter decimal number: ");
	scanf("%d",&dec);
	while(dec)
	{
		rem=dec%8;
		oct=oct+rem*temp;
		dec=dec/8;
		temp=temp*10;
	}
	printf("In Octal:%d\n",oct);
	while(dec!=0)
	{
		i=dec%16;
		hex=hex+i*temp;
		dec=dec/16;
		temp=temp*10;
		if(i>9)
		switch(i)
		{
			case 10:
				i='A';
				break;
			case 11:
				i='B';
				break;
			case 12:
				i='C';
				break;
			case 13:
				i='D';
				break;
			case 14:
				i='E';
				break;
			case 15:
				i='F';
				break;
			default:
				i=0;
		}
	}
	printf("In Hexadecimal:%d",hex);
	return 0;	
}
