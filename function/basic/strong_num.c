#include<stdio.h>
int is_strong(int);
int factorial(int);
int factorial(int n)
{
	int i,fact=1;
	for(i=1;i<=n;i++)
	{
    	fact=fact*i;
	}
	return fact;
}
int is_strong(int n)
{
	int sum=0,temp;
	temp=n;
	while(n>0)
	{
		sum=sum+factorial(n%10);
		n/=10;
	}
	return temp==sum;
}
int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	if(is_strong(num))
	{
		printf("%d is a strong number. ",num);
	}
	else
	{
		printf("%d is not strong number",num);
	}
}
