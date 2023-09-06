#include <stdio.h>
int main()
{
  int arr[50][50],i,j,r,c;
  printf("Input the rows and columns of first matrix:\n");
  scanf("%d %d",&r,&c);
  
  	printf("Input elements in the first matrix :\n");
  	for(i=0;i<r;i++)
        {
			for(j=0;j<c;j++)
            {
	           printf("element [%d],[%d]: ",i,j);
	           scanf("%d",&arr[i][j]);
            }
        }
    	printf("\nThe First matrix is :\n");
  		for(i=0;i<r;i++)
    		{
    			printf("\n");
      			for(j=0;j<c;j++)
          		printf("%d\t",arr[i][j]);
    		}
    		printf("\n\nThe transpose of a matrix is:\n");
    		for(i=0;i<c;i++)
  			{
  				printf("\n");
  				for(j=0;j<r;j++)
  				{
  					printf("%d\t",arr[j][i]);
				}
			}
}
  	
