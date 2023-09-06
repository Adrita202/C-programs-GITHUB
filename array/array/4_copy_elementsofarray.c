#include<stdio.h>
int main()
{
	int i,n;
	int a[50],b[50];
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("Enter the elements in the array:\n");
	for(i=0;i<n;i++)
	{
		printf("Element %d :  ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		b[i]=a[i];
	}
	printf("\nThe elements stored in the first array are :\n");
    for(i=0;i<n;i++)
    {
        printf("% d",a[i]);
    }
	printf("\nThe elements copied into the second array are: \n");
	for(i=0;i<n;i++)
	{
		printf("% d",b[i]);
	}
}
