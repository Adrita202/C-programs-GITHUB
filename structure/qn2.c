#include<stdio.h>
typedef struct student
{
	int roll;
	int marks;
	int date,month,year;
};
int main()
{
	int n,i;
	printf("Enter number of students: ");
	scanf("%d",&n);
	struct student b1[n];
	typedef struct student techno;
	techno *ptr[10];
	for(i=0;i<n;i++)
	{
		printf("Enter records of student %d:\n",i+1);
		printf("Enter roll no: ");
		scanf("%d",&(b1+i)->roll);
		printf("Enter marks: ");
		scanf("%d",&(b1+i)->marks);
		printf("Enter date of birth(dd mm yy): ");
		scanf("%d%d%d",&(b1+i)->date,&(b1+i)->month,&(b1+i)->year);
	}
	printf("ROLL\t MARKS\t  DOB\n");
    for (i=0;i<n;i++)
    {
        printf("%d\t %d\t %d/%d/%d\n",(b1+i)->roll,(b1+i)->marks,(b1+i)->date,(b1+i)->month,(b1+i)->year);
    }
}
