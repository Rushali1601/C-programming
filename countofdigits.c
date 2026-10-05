//Write a C program to count the digits of a whole number
#include<stdio.h>
int main()
{
	int n,c=0,d;
	printf("Enter a number: ");
	scanf("%d", &n);
	while(n!=0)
	{
		d=n%10;
		c++;
		n/=10;
	}
	printf("The count of digits is = %d", c);
	return 0;
}

