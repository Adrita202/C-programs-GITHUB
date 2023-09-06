#include<stdio.h>
int main()
{
	int i,arr[10];
	printf("Enter 10 elements in the array:\n");
	for(i=0;i<10;i++)
	{
		printf("Element %d :  ",i);
		scanf("%d",&arr[i]);
	}
	printf("Elements of the array are:\n ");
	for(i=0;i<10;i++)
	{
		printf(" %d\n ",arr[i]);
	}

}
