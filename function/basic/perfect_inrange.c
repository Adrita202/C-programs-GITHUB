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
	int a,b,i;
	printf("Enter lower limit: ");
	scanf("%d",&a);
	printf("Enter upper limit: ");
	scanf("%d",&b);
	for(i=a;i<=b;i++)
	{
        if(isPerfect(i))
            printf("%d  ",i);
    }

}
