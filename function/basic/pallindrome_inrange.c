#include<stdio.h>
int ispalindrome(int);
int ispalindrome(int n)
{
	int rev=0,temp;
	temp=n;
	while(n>0)
	{
	rev=(rev*10)+(n%10);
	n/=10;
	}
	return rev==temp;
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
        if(ispalindrome(i))
            printf("%d  ",i);
    }
}
