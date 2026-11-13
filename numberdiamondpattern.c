/*Write a c program to print the following pattern
4
4 3 4
4 3 2 3 4
4 3 2 1 2 3 4
4 3 2 3 4
4 3 4
4         */
#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter the limit: ");
    scanf("%d", &n);
        for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf("  ");
        }
        for(j=n;j>=n-i+1;j--)
        {
            printf("%d ", j);
        }
        for(j=n-i+2;j<=n;j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--)
    {
        for(j=1;j<=n-i;j++)
        {
            printf("  ");
        }
        for(j=n;j>=n-i+1;j--)
        {
            printf("%d ", j);
        }
        for(j=n-i+2;j<=n;j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
	return 0;
}
