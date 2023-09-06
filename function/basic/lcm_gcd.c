#include<stdio.h>
void lcm_gcd(int, int);
void main()
{
    int num1,num2;
    printf("Enter two Numbers\n");
    scanf("%d %d",&num1,&num2);
    lcm_gcd(num1,num2);
}

void lcm_gcd(int n1,int n2)
{
    int gcd,lcm,rem,nume,d;
    if (n1>n2)
    {
        nume=n1;
        d=n2;
    }
    else
    {
        nume=n2;
        d=n1;
    }
    rem=nume%d;
    while (rem!=0)
    {
        nume=d;
        d=rem;
        rem=nume%d;
    }
    gcd = d;
    lcm = n1*n2/gcd;
    printf("GCD of %d and %d = %d\n",n1,n2,gcd);
    printf("LCM of %d and %d = %d\n",n1,n2,lcm);
}
