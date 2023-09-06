#include <stdio.h>
int main()
{
  int a[50][50],i,j,r,c,srow,scol;
  printf("Input the rows and columns of the matrix:\n");
  scanf("%d%d",&r,&c);
  printf("Input elements for the matrix:\n");
  for(i=0;i<r;i++)
  {
  	for(j=0;j<c;j++)
  	{
	    printf("element [%d],[%d]: ",i,j);
	    scanf("%d",&a[i][j]);
    }
    
  }
  printf("\nThe First matrix is :\n");
  		for(i=0;i<r;i++)
    		{
    			printf("\n");
      			for(j=0;j<c;j++)
      			{
      				printf("%d\t",a[i][j]);
				}
			}
		for(i=0;i<r;i++)
		{
			srow=scol=0;
			{
				for(j=0;j<c;j++)
				{
					srow+=a[i][j];
					scol+=a[j][i];
				}
			}
			printf("\nSum of row = %d",srow);
		printf("\nSum of column = %d",scol);
		}
		
	}

