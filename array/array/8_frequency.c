#include<stdio.h>
int main()
{
	int i,j,n,c;
	int a[50],f[50];
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("Enter the elements in the array:\n");
	for(i=0;i<n;i++)
	{
		printf("Element %d :  ",i+1);
		scanf("%d",&a[i]);
		f[i]=0;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j])
			{
				if(f[j]>0)
				break;
				else
				f[i]++;
			}
		}
	}
	for(i=0;i<n;i++)
	{
	printf("No of %d is: %d\n",a[i],f[i]);
	}
}
