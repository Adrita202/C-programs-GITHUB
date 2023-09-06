#include<stdio.h>
void insert_element(int[],int,int,int );
int main()
{
	int i,j,n,p,arr[50];
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("Enter the elements in the array:\n");
	for(i=0;i<n;i++)
	{
		printf("Element %d:  ",i);
		scanf("%d",&arr[i]);
	}
	printf("Enter the number to be inserted: ");
	scanf("%d",&j);
	printf("Enter the position where to be inserted: ");
	scanf("%d",&p);
	insert_element(arr,n,p,j);
	printf("After insert the array is:\n");
	for(i=0;i<=n;i++)
	{
		printf("%d ",arr[i]);
	}
}
void insert_element(int arr[],int n,int p,int j)
{
	int i;
	for(i=n;i>=p-1;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[p-1]=j;
}
