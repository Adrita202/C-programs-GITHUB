#include<stdio.h>
int linear_search(int arr[],int n,int key)
{
  int i;
  for (i=0;i<n;i++)
    {
		if(arr[i]==key)
		{
			return i;
		}
	}
	return 0;
}
int main()
{
  int arr[20],n,key,i,p;
  printf("Number of elements in the list: ");
  scanf("%d", &n);
  printf("Enter elements of the list:\n");
  for (i=0;i<n;i++)
    scanf("%d",&arr[i]);
  printf("Enter the element to search: ");
  scanf("%d",&key);
  p=linear_search(arr,n,key);
  if (p==0)
    printf("Key element not found");
    else
    printf("Key element found at index %d",p);
}
