#include<stdio.h>
int is_prime(int);
int is_prime(int n)
{
	int d,i;
	i=2;
	d=0;
	/*while(i<=n/2)
	{
		if(n%i==0)
		{
			d=1;
			break;
		}
		i++;
	}
	return d==0;*/
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			d=1;
			break;
			
		}
	}
	return d==0;
}
int main()
{
	int n,i;
	/*
	printf("Enter a number: ");
	scanf("%d",&n);
	{
		if(is_prime(n))
		{
			printf("%d is a Prime number.",n);
		}
		else
		{
			printf("%d is not prime",n);
		}
	}*/
	for(i=10;i<50;i++)
	{
		if(is_prime(i))
		{
			printf("%d\t",i);
		}
	}
}

