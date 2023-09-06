#include<stdio.h>
int main()
{
	int arr[20],n,i,max,min;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	printf("Enter the elements of the array:\n");
	for(i=0;i<n;i++)
	{
		printf("Element %d: ",i);
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
	printf("THe max element of the array is: %d",max);
	min=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
			
		}
	}
	printf("\nThe minimum element is: %d",min);
}
	
