#include <stdio.h>
int main()
   {
     int n,a=0,i,j,arr[50][50],sum=0;
	 printf("Enter the size of square matrix:");
     scanf("%d",&n); 
	 printf("Enter elements of first matrix:\n");
	 a=n;
       for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
	           printf("element[%d],[%d]:",i,j);
	           scanf("%d",&arr[i][j]);
            }
        }  
	 printf("The matrix :\n");
	 for(i=0;i<n;i++)
	 {
	   for(j=0;j<n;j++)
	   {
	     printf("%d\t",arr[i][j]);
	   }
	    printf("\n");
	 }
	  for(i=0;i<n;i++)
	 {
        a=a-1;
	   for(j=0;j<n;j++)
            {
              if(j==a) 
                {
                sum=sum+arr[i][j];
                }
            }
	 }
       printf("Sumation of the left Diagonal elements is :%d\n",sum);
    }
