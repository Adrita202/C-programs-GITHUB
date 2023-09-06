#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("ENter the value of n: ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("%d",sum);
}

