#include <stdio.h>
int main()
{
  int a[50][50],b[50][50],c[50][50];
  int i,j,n;
  
  printf("Input the size of the square matrix: ");
  scanf("%d",&n); 
  printf("Input elements in the first matrix :\n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
        {
        	printf("element:[%d],[%d]: ",i,j);
	        scanf("%d",&a[i][j]);
	    }
	}
	printf("Input elements in the second matrix :\n");
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		printf("element:[%d],[%d]: ",i,j);
	        scanf("%d",&b[i][j]);
        }
    }
	    
   printf("\nThe First matrix is :\n");
   for(i=0;i<n;i++)
   {
   	for(j=0;j<n;j++)
   	{
   		printf("%d\t",a[i][j]);
    }
    printf("\n");
	}
  
  printf("\nThe Second matrix is :\n");
  for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
      {
    	printf("%d\t",b[i][j]);
	  }
	    printf("\n");
	}

   for(i=0;i<n;i++)
       for(j=0;j<n;j++)
            c[i][j]=a[i][j]+b[i][j];
   printf("\nThe Addition of two matrix is : \n");
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
       	printf("%d\t",c[i][j]);
	   }
	   printf("\n");     
   }
}
