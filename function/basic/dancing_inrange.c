#include<stdio.h>
int check_dancing(int n)
{
	int a,b,flag=0;
	if(n>=0&&n<=10)
	{
		flag=0;
	}
	else
	{
		while(n>10)
		{
			a=n%10;
			n/=10;
			b=n%10;
			if(a-b!=1&&a-b!=-1)
			{
				flag=1;
				break;
			}
		}
		return flag==0;
	}
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
        if(check_dancing(i))
            printf("%d  ",i);
    }
}

