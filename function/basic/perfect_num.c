#include<stdio.h>
int isPerfect(int num)
{
    int i,sum,n;
    sum=0;
    n=num;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    return(num==sum);
}
int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	if (isPerfect(num))
	{
		printf("The number is perfect.");
	}
	else
	{
		printf("The number is not perfect,");
	}
}


