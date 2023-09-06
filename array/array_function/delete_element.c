#include<stdio.h>
void delete_element(int [],int,int );
void delete_element(int a[],int n,int p)
{
	int i;
	for(i=p-1;i<n-1;i++,n--)
	{
		a[i]=a[i+1];

	}
}
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
	delete_element(arr,n,p);
	printf("After deleting the list is: ");
	for(i=0;i<n-1;i++)
	{
		printf("%d ",arr[i]);
	}

}
