#include<stdio.h>
int main()
{
	float bsalary,hra,da,nsalary,tax;
	printf("Enter the basic salary: ");
	scanf("%f", &bsalary);
	hra=bsalary*(10.0/100.0);
	da=bsalary*(5.0/100.0);
	if(bsalary>=20000)
	{
		tax=bsalary*(10.0/100.0);
	}
	else
	{
	tax=bsalary*(7.0/100.0);
    }
	nsalary=(bsalary+hra+da-tax);
	printf("HRA is: %.2f\n", hra);
	printf("DA is: %.2f\n", da);
	printf("Net salary is: %.2f\n", nsalary);
	return 0;
}
