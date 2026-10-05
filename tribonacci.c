//Write a C program to print a tribonacci series
#include<stdio.h>
int main()
{
	int a=0,b=0,c=1,d,n,i=1;
	printf("Enter the number of terms: ");
	scanf("%d", &n);
	while(i<=n)
	{
		printf("%d ", a);
		d=a+b+c;
		a=b;
		b=c;
		c=d;
		i++;
	}
	return 0;
}
