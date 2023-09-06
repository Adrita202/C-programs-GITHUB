#include<stdio.h>
int find_secondminimum(int[],int);
int main()
{
	int arr[50],n,i,min2;
	printf("Enter the number of elements in the array: ");
	scanf("%d",n);
	printf("\nEnter the elements of the array: ");
	for(i=0;i<n;i++)
	{
		printf("Element %d:  ",i+1);
		scanf("%d",&arr[i]);
	}
	min2=find_secondminimum(arr,n);
	printf("Second minimum element = %d",min2);
}
int find_secondminimum(int arr[],int n)
{
int i,min1=0,min2=0;
	for(i=0;i<n;i++)
    {
        if(arr[i]<min1)
        {
            min2=min1;
            min1=arr[i];
        }
        else if(arr[i]<min2&&arr[i]>min1)
        {
            min2=arr[i];
        }

	}
	return min2;
}
