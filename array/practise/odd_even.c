#include<stdio.h>
int main()
{
	int a[20],b[20],c[20];
	int n,i,j=0,k=0;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	printf("Enter the elements of the array:\n");
	for(i=0;i<n;i++)
	{
		printf("Element %d: ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			b[j++]=a[i];
		}
		else
		{
			c[k++]=a[i];
			
		}
	}
	printf("The even elements are: ");
	for(i=0;i<j;i++)
	{
		printf("%d ",b[i]);
		
	}
	printf("\nThe odd elements are: ");
	for(i=0;i<k;i++)
	{
		printf("%d ",c[i]);

	}
}
