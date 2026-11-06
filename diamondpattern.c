//wcp to print a diamond pattern
#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("Enter the limit: ");
	scanf("%d", &n);
	for(i=n;i>=1;i--)
	{
		for(k=1;k<=i-1;k++)
		{
			printf(" ");
		}
		for(j=1;j<=2*(n-i)+1;j++)
		{
			printf("*");
		}
		printf("\n");
  }
  for(i=n;i>=1;i--)
  {
  	for(k=1;k<=n-i;k++)
  	{
  		printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
