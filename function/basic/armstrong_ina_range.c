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
	for(i=1;i<y;i++)
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
		sum+=power(n%10,d);
		n/=10;

	}
	return temp==sum;
}
int main()
{
    int a,b,i;
    printf("Enter lower limit: ");
    scanf("%d",&a);
    printf("Enter upper linit: ");
	scanf("%d",&b);
    for(i=a;i<=b;i++)
	{
        if (is_armstrong(i))
            printf("%d  ",i);
    }
}
