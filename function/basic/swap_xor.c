#include<stdio.h>
void swap(int num1,int num2)
{
	num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;

   printf("\n Numbers after Swapping: ");
   printf("\n Num1 = %d and Num2 = %d", num1, num2);
}
int main()
{
   int n1, n2;

   printf("\nEnter First Number : ");
   scanf("%d", &n1);

   printf("\nEnter Second Number : ");
   scanf("%d", &n2);

	swap(n1,n2);
   

}
