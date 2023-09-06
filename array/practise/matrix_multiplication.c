#include<stdio.h>
int main()
{
	int a[5][5],b[5][5],c[5][5];
	int i,j,r1,c1,r2,c2,k;
	printf("enter the number of row of the 1st matrix: ");
	scanf("%d",&r1);
	printf("enter number of column of the 1st matrix: ");
	scanf("%d",&c1);
	printf("enter the number of row of the 1st matrix: ");
	scanf("%d",&r2);
	printf("enter number of column of the 1st matrix: ");
	scanf("%d",&c2);
	if(c1!=r2)
	{
		printf("MULTIPLICATION NOT POSSIBLE");
    }
    else
    {
		printf("Enter element of the  1st matrix:\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				printf("Element [%d][%d]:",i,j);
				scanf("%d",&a[i][j]);
			}
		}
		printf("Enter element of the  2nd matrix:\n");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("Element [%d][%d]: ",i,j);
				scanf("%d",&b[i][j]);
			}
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

	printf("THe multiplication is:\n");
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
