#include<stdio.h>
int isleapyear(int);
int isleapyear(int n)
{
	if((n%400==0)||(n%4==0)&&(n%100!=0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
	int main()
	{
		int year;
		printf("Enter a year to check leapyear: ");
		scanf("%d",&year);
		if(isleapyear(year))
		{
			printf("%d is a leapyear",year);
		}
		else
		{
			printf("%d is not a leapyear",year);
		}
	}

