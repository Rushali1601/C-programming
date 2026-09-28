//Write a C program to print the fibonacci series: 0+1+1+2+3+5+8+...+n terms
#include<stdio.h>
int main()
{
	int i=1,a=0,b=1,c,n;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	while(i<=n)
	{
		c=a+b;
		printf("%d\t", a);
		a=b;
		b=c;
		i++;
	}
	return 0;
}
