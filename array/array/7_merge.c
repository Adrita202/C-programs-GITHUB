#include <stdio.h>
int main()
{
    int a[10],b[10],c[20];
    int s1,s2,s3;
    int i,j,k,temp;
    
    printf("Input the number of elements to be stored in the first array :");
    scanf("%d",&s1);
    printf("Input %d elements in the array:\n",s1);
    for(i=0;i<s1;i++)
        {
	      printf("element:%d : ",i+1);
	      scanf("%d",&a[i]);
	    }
       printf("Input the number of elements to be stored in the second array :");
       scanf("%d",&s2);
       printf("Input %d elements in the array :\n",s2);
       for(i=0;i<s2;i++)
        {
	      printf("element:%d : ",i+1);
	      scanf("%d",&b[i]);
		}
		for(i=0;i<s1;i++)
        {
            c[i]=a[i];
         }
     	for(j=0;j<s2;j++,i++)
        {
            c[i]=b[j];
        }
        for(i=0;i<s1+s2-1;i++)
	{
		for(j=0;j<s1+s2-1-i;j++)
		{
			if(c[j]>c[j+1])
			{
				temp=c[j];
				c[j]=c[j+1];
				c[j+1]=temp;
			}
		}
	}
        printf("\nThe merged array is :\n");
    	for(i=0;i<s1+s2;i++)
    	{
        	printf("%d   ",c[i]);
    	}
}
