#include<stdio.h>
int main()
{
	int i,n,max,min,arr[50];
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("Enter the elements in the array:\n");
	for(i=0;i<n;i++)
	{
		printf("Element %d :  ",i);
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	printf("MAximum value of arrey : %d",max);
	min=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	printf("\nMinimum value of arrey : %d",min);
}
