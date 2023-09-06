#include<stdio.h>
int fact(int a)
{
	int f,i;
	for(i=0;i<a;i++)
	{
		f=f*1;
		
	}
	return f;
}
int main()
{
	int i,j,k;
	float sum=0;
	for(i=0;i<30;i++);
	{
		k=fact(i);
		float b=1/(k*1);
		sum=sum+b;
	}
	printf("The sum is: %f",sum);
}
