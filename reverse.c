//Write a c program to reverse the digits of a whole number
#include<stdio.h>
int main()
{
	int n,d,rev;
	printf("Enter a number: ");
	scanf("%d", &n);
	while(n!=0)
	{
		d=n%10;
		rev=rev*10+d;
		n/=10;
	}
	printf("The rverse of the number is = %d", rev);
	return 0;
}
