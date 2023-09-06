#include<stdio.h>
int main()
{
	int a[20],b[20],c[20];
	int n1,n2,i,j,temp,n;
	printf("Enter number of elements of the 1st array: ");
	scanf("%d",&n1);
	printf("Enter number of elements of the 2nd array: ");
	scanf("%d",&n2);
	printf("Enter the elements of the 1st array:\n");
	for(i=0;i<n1;i++)
	{
		printf("Element %d: ",i);
		scanf("%d",&a[i]);
	}
	printf("Enter the elements of the 2nd array:\n");
	for(i=0;i<n2;i++)
	{
		printf("Element %d: ",i);
		scanf("%d",&b[i]);
	}
	for(i=0;i<n1;i++)
	{
		c[i]=a[i];
	}
	for(j=0;j<n2;j++,i++)
	{
		c[i]=b[j];
		
	}
	printf("The merged array is: ");
	for(i=0;i<n1+n2;i++)
	{
		printf("%d ",c[i]);
	}
	n=n1+n2;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(c[j]>c[j+1])
			{
				temp=c[j];
				c[j]=c[j+1];
				c[j+1]=temp;
			}
		}
	}
	printf("The merged sorted array is: ");
	for(i=0;i<n1+n2;i++)
	{
		printf("%d ",c[i]);
	}
}
