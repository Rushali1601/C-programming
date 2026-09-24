#include<stdio.h>
int main()
{
	float area, cirf, r;
	printf("Enter the radius of the circle: ");
	scanf("%f", &r);
	area=3.14*r*r;
	cirf=2*3.14*r;
	printf("The circumference of the circle is: %.2f\n", cirf);
	printf("The area of the circle: %.2f\n", area);
	return 0;
}
