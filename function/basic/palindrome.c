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
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	if(ispalindrome(num))
	{
		printf("%d is a palindrome number",num);
	}
	else
	{
		printf("%d is not a palindrome number",num);
	}
}
