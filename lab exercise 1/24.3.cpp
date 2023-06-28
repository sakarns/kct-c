#include<stdio.h>\\MISTAKE\\
int main()
{
	int i=0,rem=0,bin=0,hex=0,oct=0,dec=0,temp=1,rev=0;
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
	while(oct!=0)
    {
        rem = oct%10;
        rev = (rev*10) + rem;
        oct= oct/10;
    }
    oct = rev;
    printf("In Binary: ");
    while(oct!=0)
    {
        rem = oct%10;
        switch(rem)
        {
            case 0: printf("000");
                break;
            case 1: printf("001");
                break;
            case 2: printf("010");
                break;
            case 3: printf("011");
                break;
            case 4: printf("100");
                break;
            case 5: printf("101");
                break;
            case 6: printf("110");
                break;
            case 7: printf("111");
                break;
            default: printf(" InvalidOctalDigit(%d) ", rem);
                break;
        }
    oct = oct/10;
    while (bin!=0)
    {
        rem= bin%10;
        hex= hex+ rem * temp;
        temp=temp*2;
        bin=bin/10;
    }
    printf("\nIn Hexadecimal: %lX",hex);
	}
	return 0;
}