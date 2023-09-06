#include<stdio.h>
int GCD(int ,int);
int main()
{
	int x,y,z;
	printf("Enter 2 numbers: ");
	scanf("%d%d",&x,&y);
	z=GCD(x,y);
	printf("%d",z);
}
int GCD(int a ,int b)
{
	int c;
	c=a%b;
	if(a>b&&c==0)
	return (b);
	else
	return (GCD(b,c));
}
