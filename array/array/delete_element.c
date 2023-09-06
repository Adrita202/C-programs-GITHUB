#include<stdio.h>
int main()
{
	int i,n,p,arr[50];
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("Enter the elements in the array:\n");
	for(i=0;i<n;i++)
	{
		printf("Element %d:  ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Enter position to delete element: ");
	scanf("%d",&p);
	for(i=p-1;i<n;i++)
	{
		arr[i]=arr[i+1];
		
	}
	n--;
	printf("After deleting the list is: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
