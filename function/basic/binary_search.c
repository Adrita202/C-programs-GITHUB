#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n],i;
    printf("Enter the elements of the array in sorted order: ");
    for (i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    int key;
    printf("Enter the element to search: ");
    scanf("%d",&key);
    int index=binarySearch(arr,0,n-1,key);
    if (index!=1)
    {
        printf("Element %d found at index %d\n",key,index);
    }
    else
    {
        printf("Element %d not found in the array\n",key);
    }
}
int binarySearch(int arr[],int s,int e,int key)
{
    if (s<=e)
    {
        int mid=s+(e-s)/2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid]>key)
        {
            return binarySearch(arr,s,mid- 1,key);
        }
        else
        {
            return binarySearch(arr,mid+1,e,key); 
        }
    }
    return 1;
}


