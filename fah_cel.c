#include<stdio.h>
int main()
{
	float c,f;
	printf("Enter the temperature in Fahenheit: ");
	scanf("%f", &f);
	c=(f-32)*5/9;
	printf("The temperature in Celsius is: %.2f", c);
	return 0;
}
