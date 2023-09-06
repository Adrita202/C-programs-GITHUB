#include<stdio.h>
int gcd(int,int);
int gcd(int a,int b)
{
	if (a==b)
		return a;
	else if(a>b && a%b==0)
		return b;
	else
		return gcd(b,a%b);
}
int main()
{
	int num1,num2,z;
	printf("Enter two numbers to find the GCD:\n");
	scanf("%d%d",&num1,&num2);
	z=gcd(num1,num2);
	printf("The GCD of %d & %d is : %d",num1,num2,z);
	
}

