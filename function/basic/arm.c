#include<stdio.h>
int count(int);
int power(int,int);
int is_armstrong(int);
int count(int n)
{
	int count;
	while(n>0)
	{
		n/=10;
		count++;
	}
	return count;
}
int power(int x,int y)
{
	int i=0,mul=1;
	for(i=1;i<=y;i++)
	{
		mul*=x;
	}
	return mul;
}
int is_armstrong(int n)
{
	int d,sum=0,temp;
	d=count(n);
	temp=n;
	while(n>0)
	{
		sum=sum+power(n%10,d);
		n/=10;
		
	}
	return temp==sum;
}
int main()
{
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	if(is_armstrong(n))
	{
		printf("The number is armstrong .");

	}
	else
	{
		printf("The number is not armstrong. ");
	}
}
