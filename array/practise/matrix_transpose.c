#include<stdio.h>
int main()
{
	int a[5][5];
	int i,j,r1,c1;
	printf("enter the number of row: ");
	scanf("%d",&r1);
	printf("enter number of column: ");
	scanf("%d",&c1);
	printf("Enter element of the  matrix:\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("Element [%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("The transpose of the matrix is: ");
	for(i=0;i<c1;i++)
	{
		printf("\n");
		for(j=0;j<r1;j++)
		{
			printf("%d\t",a[j][i]);
		}
	}
}
