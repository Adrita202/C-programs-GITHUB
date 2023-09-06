#include<stdio.h>
int main()
{
	int arr[20],n,i,j,temp;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	printf("Enter the elements of the array:\n");
	for(i=0;i<n;i++)
	{
		printf("Element %d: ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}

		}
	}
	printf("The array in ascending order: ");
	for(i=0;i<n;i++)
	{
		printf("\t%d",arr[i]);
	}
	printf("\nLargest element: %d",arr[n-1]);
	printf("\nSecond largest element : %d",arr[n-2]);
	printf("\nsecond smallest element: %d",arr[1]);
}
	
