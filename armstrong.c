#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,c=0,sum=0,original,d,rem,count;
    printf("Enter a number: ");
    scanf("%d",&n);
    original=n;
    d=n;
    while(d!=0)
    {
        d=d/10;
        c++;
    }
    count=c;
    while(n>0)
    {
        rem=n%10;
        sum=sum+pow(rem,count);
        n=n/10;
    }
    if(sum==original)
    {
        printf("Armstrong number");
    }
    else
    {
        printf("Not an Armstrong number");
    }

    return 0;
}
