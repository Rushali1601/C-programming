//Write a C program to display the odd numbers from 1-n
#include<stdio.h>
int main()
{
	int i=1,n;
	printf("Enter the limit: ");
	scanf("%d", &n);
	while(i<=n)
	{
	if(i%2!=0)
	{
	  printf("The number %d is odd\n", i);
	}
	  i++;
	}
	return 0;
}
