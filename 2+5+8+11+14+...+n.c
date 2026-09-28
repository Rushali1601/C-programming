//Write a C program to calculate sum of the given series: 2+5+8+11+14+...upto n terms
#include<stdio.h>
int main()
{
	int i=1,n,term=2,s=0;
	printf("Enter the value of n: ");
	scanf("%d", &n);
 while(i<=n)
	{
		s=s+term;
		term+=3;
		i++;
	}
	printf("The sum of the series is: %d", s);
	return 0;
}
