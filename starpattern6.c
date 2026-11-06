//Write a C program to print the following pattern
#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=5;i>=1;i--)
	{
		for(k=1;k<=(6-i)-1;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d", j);
		}
		printf("\n");
	}
}
