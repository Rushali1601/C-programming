#include <stdio.h>
int main()
{
    int i,j,k,n;
    int n1=1,t,r;
    printf("Enter the limit: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf("  ");
        }
        for(k=1;k<=i;)
        {
            t=n;
            r=0;
            while(t>00)
            {
                r=r*10+t%10;
                t=t/10;
            }
            if(r==n1)
            {
                printf("%4d", n1);
                k++;
            }
            n1++;
        }
        printf("\n");
    }
    return 0;
}
