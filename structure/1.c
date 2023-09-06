#include<stdio.h>
struct student
{
	char name[50];
	int roll;
	char sec;
	int marks;
};
void bubble_sort(struct student std[],int);
int main()
{
	int i,n,j;
	struct student std[50];
	printf("Enter Number of record: ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("Enter data of the student %d:\n",i+1);
        printf("Enter name:");
        scanf("%s",&std[i].name);
        printf("Enter rollno: ");
        scanf("%d",&std[i].roll);
        printf("Enter section:");
        scanf("%c",&std[i].sec);
        scanf("%c",&std[i].sec);
        printf("Enter marks:");
        scanf("%d",&std[i].marks);
    }
    
    printf("\nThe Student Record according to  roll no:\n");
    printf("Name\t Rollno\t  Marks\n");
    bubble_sort(std,n);
    for (i=0;i<n;i++)
    {
        printf("%s\t %d\t  %d\n",std[i].name,std[i].roll,std[i].marks);
    }

}
void bubble_sort(struct student std[],int x)
{
	int i,j;
	struct student temp;
    for (i=0;i<x-1;i++)
    {
        for(j=0;j<(x-1-i);j++)
        {
            if(std[j].roll>std[j+1].roll)
            {
                temp=std[j];
                std[j]=std[j+1];
                std[j+1]=temp;
			}
		}
		
//		for (j=0;j<x;j++)
//    	{
//        	printf("%s\t %d\t  %d\n",std[j].name,std[j].roll,std[j].marks);
//    	}
//    	printf("\n_______________________________________\n");
	}
}

