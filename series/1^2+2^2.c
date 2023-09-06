#include<stdio.h>
int main()
{
	int n,i,sum=0,k;
	printf("ENter the value of n: ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		k=i*i;
		sum=sum+k;
	}
	printf("%d",sum);
}

