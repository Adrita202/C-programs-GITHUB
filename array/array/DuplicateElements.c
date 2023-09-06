#include <stdio.h>
void find_unique(int arr[],int n)
{
	int i,j,k,ctr;
for(i=0; i<n; i++)
    {
        ctr=0;
        for(j=0,k=n; j<k+1; j++)
        {
            if (i!=j)
            {
		       if(arr[i]==arr[j])
              {
                 ctr++;
               }
             }
        }
       if(ctr==0)
        {
          printf("%d ",arr[i]);
        }
    }
}
int main()
{
    int arr[100],n,i;
       printf("Input the number of elements to be stored in the array: ");
       scanf("%d",&n);
       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
        {
	      printf("element %d : ",i);
	      scanf("%d",&arr[i]);
	    }
    printf("\nThe unique elements found in the array are: \n");
	find_unique(arr,n);
}
    

