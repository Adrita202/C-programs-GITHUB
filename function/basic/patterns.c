#include<stdio.h>
void rightangle_triangle(int);
void square(int);
void rightangle_triangle(int num)
{
	int i,j;
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
void square(int num)
{
	int i,j;
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=num;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
void hollow_rectangle(int num)
{
	int i,j,k;
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=num;j++)
		{
			if(i==1||i==num||j==1||j==num)
			{
			printf("*");
			}
			else
			{
			printf(" ");
			}
		}
		printf("\n");
	}
}
void inverted_triangle(int num)
{
	int i,j;
	for(i=num;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
		printf("*");
		}
		printf("\n");
	}
}
void rhombus(int num)
{
    int i,j;
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=num-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=num;j++)
        {
            printf("*");
        }
        printf("\n");
	}
}
void hollow_rhombus(int num)
{
    int i,j;
    printf("Enter rows : ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=num-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=num;j++)
        {
            if(i==1||i==num||j==1||j==num)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
	}
}
int main()
{
	int p,row;
	printf("Press 1=print Right angle triangle,2=square,3=hollow rectangle,4=invetred triangle,5=rhombus,6=hollow rhombus ");
	printf("\nEnter the code value: ");
	 scanf("%d",&p);
	 printf("enter number of rows: ");
	 scanf("%d",&row);
	 if(p==1)
	 {
		(rightangle_triangle(row));
	 }
	 else if(p==2)
	 {
	 	square(row);
	 }
	 else if(p==3)
	 {
		hollow_rectangle(row);
	 }
	 else if(p==4)
	 {
	 	inverted_triangle(row);
	 }
	 else if(p==5)
	 {
	 	rhombus(row);
	 }
	 else if(p==6)
	 {
	 	hollow_rhombus(row);
	}
	 else
	 {
	 	printf("Error");
	 }
}
