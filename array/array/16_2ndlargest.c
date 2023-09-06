#include <stdio.h>
int main()
{
    int arr[50],n,i;
    int max1=0,max2=0;
    printf("Enter size of the array: ");
    scanf("%d",&n);
    printf("Enter elements in the array:\n");
    for(i=0; i<n; i++)
    {
    	printf("elements %d: ",i+1);
        scanf("%d",&arr[i]);
	}
    for(i=0;i<n;i++)
    {
        if(arr[i]>max1)
        {
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]>max2&&arr[i]<max1)
        {
            max2=arr[i];
        }
    }
    printf("Second largest=%d", max2);
}
