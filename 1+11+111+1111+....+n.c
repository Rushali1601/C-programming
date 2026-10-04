#include<stdio.h>
int main()
{
	int n,i = 1,term = 0,sum=0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    while (i <= n)
    {
        term = term * 10 + 1;
		sum=sum+term;
        i++;
    }
    printf("%d ", sum);
    return 0;
}

