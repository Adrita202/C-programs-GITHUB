#include <stdio.h>
int main()
 {
    int a[10],b[10],c[10];
    int i,j=0,k=0,n;
    printf("Input the number of elements in the array :");
    scanf("%d",&n);
    printf("Input elements in the array :\n");
    for(i=0;i<n;i++)
    {
	    printf("element:%d: ",i+1);
	    scanf("%d",&a[i]);
	}
    for(i=0;i<n;i++)
    {
		if (a[i]%2==0)
		{
		   b[j++]=a[i];
		}
		else
		{
		   c[k++]=a[i];
		}
    }
    printf("\nThe Even elements are : \n");
    for(i=0;i<j;i++)
    {
		printf("%d ",b[i]);
    }
    printf("\nThe Odd elements are :\n");
    for(i=0;i<k;i++)
    {
		printf("%d ",c[i]);
    }
 }
