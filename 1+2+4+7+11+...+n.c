//Write a C program to print the following series: 1+2+4+7+11+..+n terms
#include<stdio.h>
int main()
{
	int term=1,i=1,n,s=0;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	while(i<=n)
	{
		s+=term;
		term+=i;
		i++;
	}
	printf("The sum of the sries: %d", s);
	return 0;
}
