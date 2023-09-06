#include<stdio.h>
#include<math.h>
int sum(int);
int main()
{
	int n,s=0,p;
	printf("Enter the limit: ");
	scanf("%d",&n);
p=sum(n);
	printf("the sum is: %d",p);
	
}
int sum(int n)
{
	int i,s=0;
	for(i=1;i<=n;i++)
	{
		s+=pow(i,2);
	}
	return s;
}
