#include <stdio.h>
int main()
   {
     int n,i,j,arr[50][50],sum=0;
	 printf("Enter the size of square matrix:");
     scanf("%d",&n); 
	 printf("Enter elements of first matrix:\n");
       for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
	           printf("element[%d],[%d]:",i,j);
	           scanf("%d",&arr[i][j]);
			   if(i==j)
			   {
				 sum=sum+arr[i][j];
			   }
            }
        }  
	 printf("The matrix is:\n");
	 for(i=0;i<n;i++)
	 {
	   for(j=0;j<n ;j++)
	   {
	   
	     printf("%d\t",arr[i][j]);
	   }
	    printf("\n");
	 }
       printf("Sumation of the right Diagonal elements is :%d\n",sum);
    }
