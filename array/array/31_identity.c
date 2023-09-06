#include <stdio.h>
int main()
{
   int r,c,i,j,k=1,arr[100][100];
   printf("Enter the number of rows of the matrix:");
   scanf("%d",&r);
   printf("Enter the number of columns of the matrix:");
   scanf("%d",&c);
   printf("Enter the elements of the first matrix:\n");
   for(i=0;i<r;i++)
        {
			for(j=0;j<c;j++)
            {
	           printf("elements[%d],[%d]:",i,j);
	           scanf("%d",&arr[i][j]);
            }
        }    
 	printf("The matrix is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
	    printf("%d\t",arr[i][j]);
	    printf("\n");
	}
    for(i=0;i<r;i++)
    {
     	for(j=0;j<c;j++)
     	{
	 		if(arr[i][j]!=1 && arr[j][i]!=0)
	 		{
	   			k= 0;
	   			break;
	 		}
		}
	}
   if(k==1)
   {
   		printf("Its an identity matrix");
   }
   else
   {
   		printf("It is not an identity matrix\n");
   }

}
