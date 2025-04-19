#include <stdio.h>
int main()
{
  int a[50][50],b[50][50],c[50][50],i,j,k,r1,c1,r2,c2;
  printf("Input the rows and columns of first matrix :\n");
  scanf("%d %d",&r1,&c1);
  printf("\nInput the rows and columns of second matrix :\n");
  scanf("%d %d",&r2,&c2);
  if(c1!=r2)
	printf("Mutiplication of Matrix is not possible.");

  else
  {
  	printf("Input elements in the first matrix :\n");
  	for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
	           printf("element [%d],[%d]: ",i,j);
	           scanf("%d",&a[i][j]);
            }
        }   
       printf("Input elements in the second matrix :\n");
       for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
	           printf("element:[%d],[%d]: ",i,j);
	           scanf("%d",&b[i][j]);
            }
        }    
 	 printf("\nThe First matrix is :\n");
  		for(i=0;i<r1;i++)
    		{
    			printf("\n");
      			for(j=0;j<c1;j++)
          		printf("%d\t",a[i][j]);
    		}
  	printf("\nThe Second matrix is :\n");
  		for(i=0;i<r2;i++)
    		{
      			printf("\n");
      			for(j=0;j<c2;j++)
      			printf("%d\t",b[i][j]);
    		}
      for(i=0;i<r1;i++)
      {
      	for(j=0;j<c2;j++)
      	{
      		c[i][j]=0;
      		for(k=0;k<r2;k++)
      		{
      			c[i][j]+=a[i][k]*b[k][j];
			}
		  }
		} 
  printf("\nThe multiplication of two matrices is : \n");
  for(i=0;i<r1;i++)
     {
        printf("\n");
        for(j=0;j<c2;j++)
         {
           printf("%d\t",c[i][j]);
         }
     }
  }
}

