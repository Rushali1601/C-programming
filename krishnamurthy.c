#include<stdio.h>
int main()
{
	int n,i,j,rem,sum=0;
	long int fact;
	printf("Enter a number: ");
	scanf("%d", &n);
    for(i=n;i>0;i=i/10)
    {
    	fact=1;
    	rem=i%10;
    	for(j=1;j<=rem;j++)
    	{
    		fact=fact*j;
		}
		sum=sum+fact;
	}
	if(n==sum)
	{
		printf("Krishnamurthy number");
	}
	else
	{
		printf("Not a Krishnamurthy number");
	}
	return 0;
}
