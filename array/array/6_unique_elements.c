#include<stdio.h>
int main()
{
	int i,j,n,d,count,a[50];
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("Enter the elements in the array:\n");
	for(i=0;i<n;i++)
	{
		printf("Element %d:  ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=0;j<n;j++)
			{
				if(a[i]==a[j])
					{
						count++;
					}
			}
		}
		
	printf("The unique elements are :\n");
		if(count!=0)
		{
			printf("%d",&a[i]);
		}
	}
	

