#include<stdio.h>
void selection_sort(int[], int);
void selection_sort(int arr[],int n)
{
	int i,j,temp;
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
}
int main()
{
	int a[10],n,i;
	printf("Enter the number of elements:\n");
	scanf("%d",&n);
	printf("Enter the elements: ");
	for(i=0;i<n;i++)
	{
		printf("Element %d: ",i);
		scanf("%d",&a[i]);
	}
	selection_sort(a,n);
	printf("Sorted array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	
}
