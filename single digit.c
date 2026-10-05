//Write a C program to find the sum of digits of a whole number
#include<stdio.h>
int main()
{
	int n,sum=0,digit;
	printf("Enter a number: ");
	scanf("%d", &n);
		while(n>0)
		{
			digit=n%10;
			sum=sum+digit;
			n/=10;
		}
	printf("Sum of the digit of the integer is = %d", sum);
	return 0;
}
