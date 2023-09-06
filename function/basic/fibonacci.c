#include<stdio.h>
int fibo(int n)
{
	int i,a=0,b=1,c=0;
	for(i=1;i<=n;i++)
    {
    	printf("%d ",c);
    	c=a+b;
    	b=a;
    	a=c;
	}

}
int main()
{
	int n;
	printf("Enter no of terms: ");
	scanf("%d",&n);
    printf("\nFibonacci Series : \n",fibo(n));

}

