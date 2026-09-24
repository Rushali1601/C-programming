#include<stdio.h>
int main()
{
	float l,b,area,peri;
	printf("Enter the length of the rectangle: ");
	scanf("%f", &l);
	printf("Enter the breadth of the rectangle: ");
	scanf("%f", &b);
	peri=2*(l+b);
	area=l*b;
	printf("Area of the rectangle is: %.2f\n", area);
	printf("Perimeter of the rectangle is: %.2f\n", peri);
	return 0;
}
