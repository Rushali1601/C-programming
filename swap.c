#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the first number: ");
	scanf("%d",&a);
	printf("Enter the second number: ");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("After swapping a =%d\n ", a);
	printf("After swapping b =%d\n ", b);
	return 0;
}
