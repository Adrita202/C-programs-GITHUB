#include <stdio.h>
int main()
{
    int n,i,j,k;
    printf("Enter number of rows: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1; j<=i; j++)
        { 
            if(j==1||j==i||j==n)
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
