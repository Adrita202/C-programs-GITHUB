#include<stdio.h>
int convert_decimal(int );
int convert_decimal(int binary)
{
	int rem,decimal=0,base=1;
	while(binary!=0)
	{
		rem=binary%10;
		decimal=decimal+rem*base;
		base=base*2;
		binary=binary/10;
	}
	return decimal;
}
int main()
{
	int n,p;
	printf("Enter a binary number: ");
	scanf("%d",&n);
	p=convert_decimal(n);
	printf("After conversion the decimal number is:%d",p);
	
}

