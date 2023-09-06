#include <stdio.h>
int fact(int );
int fact (int n)
{
	int i,fact=1;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}
int main()
{
    int num,factorial;
    printf("Enter any number: ");
    scanf("%d",&num);
    factorial=fact(num);
    printf("Factorial of %d is %d",num,factorial);

    
}


