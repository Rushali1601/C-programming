//write a C program to calculate simple interest
#include<stdio.h>
int main()
{
	float p,r,t,SI;
	printf("Enter the principal value : ");
	scanf("%f", &p);
	printf("Enter the rate per annum : ");
	scanf("%f", &r);
	printf("Enter the time : ");
	scanf("%f", &t);
	SI = (p*r*t)/100.0;
	printf("The simple interest is : %.2f\n", SI);
	return 0;
}
