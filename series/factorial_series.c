#include<stdio.h>
int main()
{
	int n,i,s=0,d=1;
	printf("ENter the value of n: ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		n=1;
		d=d*i;
		s=s+n/d;
	}
	printf("%d",s);
}
