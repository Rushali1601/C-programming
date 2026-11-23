#include<stdio.h>
int main()
{
	int i;
	int a[5]={2, 4, 6, 8, 10};
	for(i=0;i<5;i++)
	{
		printf("%d\t", a[i]);
	}
	for(i=0;i<5;i++)
	{
		if(i==2)
		{
			a[i]=99;
		}
	}
	printf("The array elements after insertion are: ");
	for(i=0;i<5;i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}
