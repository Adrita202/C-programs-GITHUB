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
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("The array in ascending order: ");
	for(i=0;i<n;i++)
	{
		printf("\t%d",arr[i]);
	}

}
