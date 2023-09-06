#include<stdio.h>
int main()
{
	int arr[20],n,i,sum=0;
	float avg=0;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	printf("Enter the elements of the array:\n");
	for(i=0;i<n;i++)
	{
		printf("Element %d: ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	printf("The sum of the elements: %d",sum);
	avg=sum/n;
	printf("\nThe average is: %.2f",avg);
}
