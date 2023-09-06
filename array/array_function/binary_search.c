#include<stdio.h>
void binary_search(int[],int,int);
void binary_search(int arr[],int n,int key)
{
   int s=0,mid;
   	while (s<n)
   	{
	  mid=(s+n)/2;
	  if (arr[mid]==key)
	  {
         	printf("element found at index: %d",mid);
         	break;
	  }
      else if (arr[mid]<key)
         s=mid+1;
      else
         n=mid-1;
    }
    if(s==n)
    {
    	printf("element not found");
	}
 }

int main()
{
    int arr[50],i,n,key,p;
    printf("Enter number of elements in the array: ");
    scanf("%d",&n);
    printf("\nEnter Elements of the sorted array: \n");
    for (i=0;i<n;i++)
        scanf("%d", &arr[i]);
	printf("Enter Element to Search: ");
    scanf("%d",&key);
    binary_search(arr,n,key);
}


