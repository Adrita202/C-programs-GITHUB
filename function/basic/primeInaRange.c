#include <stdio.h>
int checkPrime(int num)
{
	int i;
        for(i=2;i<num/2;i++)
        {
            if(num%i==0)
            {
                return 0;
            }
        }
    return 1;
}

int main()
{
    int a,b,i;
    printf("Enter lower limit: ");
    scanf("%d",&a);
    printf("Enter upper linit: ");
	scanf("%d",&b);
	printf("The prime numbers are: \n");
    for(i=a;i<=b;i++)
	{
        if(checkPrime(i))
            printf("%d   ",i);
    }
}


