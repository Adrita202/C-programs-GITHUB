#include <stdio.h>
int main()
{
    int arr[50],n,i;
    int min1=0,min2=0;
    printf("Enter size of the array: ");
    scanf("%d",&n);
    printf("Enter elements in the array:\n");
    for(i=0; i<n; i++)
    {
    	printf("elements %d: ",i);
        scanf("%d",&arr[i]);
	}
    for(i=0;i<n;i++)
    {
        if(arr[i]<min1)
        {
            min2=min1;
            min1=arr[i];
        }
        else if(arr[i]<min2&&arr[i]>min1)
        {
            min2=arr[i];
        }
    }
    printf("Second =%d",min2);
}
