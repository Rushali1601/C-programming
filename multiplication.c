//Write a C progrm which accepts an integer number and print the muliplication of the digits
#include<stdio.h>
int main()
{
	int n,s=1,r;
	printf("Enter a number: ");
	scanf("%d", &n);
	while(n!=0)
	{
		r=n%10;
		s=s*r;
		n=n/10;
	}
	printf("The result is: %d", s);
  return 0;
}
