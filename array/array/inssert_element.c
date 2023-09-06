#include<stdio.h>
int main()
{
	int i,j,n,p,arr[50];
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("Enter the elements in the array:\n");
	for(i=0;i<n;i++)
	{
		printf("Element %d:  ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Enter the number to be inserted: ");
	scanf("%d",&j);
	printf("Enter the position to be inserted: ");
	scanf("%d",&p);
	for(i=n;i>=p;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[p]=j;
	printf("After insert the array is:\n");
	for(i=0;i<=n;i++)
	{
		printf("%d ",arr[i]);
	}
}
