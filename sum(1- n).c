#include<stdio.h>
int main()
{
	int i=1,s=0,n;
	printf("Enter the limits: ");
	scanf("%d", &n);
	while(i<=n)
	{
		s=s+i;
		i++;
	}
	printf("The sum of numbers from 1 to n is: %d", s);
	return 0;
}
