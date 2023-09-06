#include<stdio.h>
int isleapyear(int);
int isleapyear(int n)
{
	if((n%400==0)||(n%4==0)&&(n%100!=0))
	{
		return 1;
	}
	else
		return 0;
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
        if(isleapyear(i))
            printf("%d  ",i);
    }
	}

