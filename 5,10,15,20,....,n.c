#include <stdio.h>
int main()
{
    int n, i = 1, term;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    while (i <= n)
    {
        term = 5 * i;
        printf("%d,", term);
        i++;
    }
    return 0;
}
