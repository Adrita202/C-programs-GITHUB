#include<stdio.h>
int main()
{
	int i,n,arr[50];
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("Enter the elements in the array:\n");
	for(i=0;i<n;i++)
	{
		printf("Element %d :  ",i);
		scanf("%d",&arr[i]);
	}
	printf("Elements of the array are:\n ");
	for(i=n-1;i>=0;i--)
	{
		printf(" %d\n ",arr[i]);
	}

}
