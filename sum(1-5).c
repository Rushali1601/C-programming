#include<stdio.h>
int main()
{
	int i=1,s=0;
	while(i<=5)
	{
		s=s+i;
		i++;
	}
	printf("The sum of numbers from 1 to 5: %d", s);
	return 0;
}
