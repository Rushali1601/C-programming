#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter the limit: ");
    scanf("%d", &n);
    for(i = n; i >= 1; i--)
    {
        for(j = 1; j <= n-i; j++)
        {
            printf("  ");
        }
        for(j = 4; j >= 5-i; j--)
        {
            printf("%d ", j);
        }
        for(j = 6-i; j <= 4; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
