//Write a C program to print the following pattern
#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=4;i>=1;i--)
	{
		for(k=1;k<=i-1;k++)
		{
			printf(" ");
		}
		for(j=4;j>=i;j--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
