#include<stdio.h>
struct student
{
	char name[50];
	int roll;
	char sec;
	int marks;
};
int main()
{
	int i,n,j;
	struct student std[300] ;
	printf("Enter Number of record: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        printf("Enter data of the student %d:\n",i);
        printf("Enter name:");
        scanf("%s",&std[i].name);
        printf("Enter rollno: ");
        scanf("%d",&std[i].roll);
        printf("Enter section:");
        scanf("%s",&std[i].sec);
        printf("Enter marks:");
        scanf("%d",&std[i].marks);
    }
    printf("\nThe data is:\n");
    printf("Name\t Rollno\t Section\t Marks\n");
    for (i=0;i<n;i++)
    {
        printf("%s\t %d\t %s\t %d",std[i].name,std[i].roll,std[i].sec,std[i].marks);
    }

    struct student temp;
    for (i=0;i<n-1;i++)
    {
        for(j=0;j<(n-1-i);j++)
        {
            if(std[j].roll>std[j+1].roll)
            {
                temp=std[j];
                std[j]=std[j+1];
                std[j+1]=temp;
			}
		}
	}
	printf("Name\t Rollno\t Section\t Marks\n");
    for (i=0;i<n;i++)
    {
        printf("%s\t %d\t %s\t %d",std[i].name,std[i].roll,std[i].sec,std[i].marks);
    }
}

