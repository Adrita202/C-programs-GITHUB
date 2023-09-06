#include <stdio.h>
int checkArmstrong(int n);
int checkArmstrong(int n) 
{
    int rem,sum=0,num;
    num=n;
    while(num!=0)  
    {  
        rem=num%10;
        sum+=rem*rem*rem;
        num=num/10;  
    }
    return(n==sum);
} 
int main()
{
    int n;
    printf("Input any number: ");
    scanf("%d",&n);
    if(checkArmstrong(n))
    {
        printf("This is an Armstrong number.");
    }
    else
    {
        printf("This is not an Armstrong number");
    }
     
}


