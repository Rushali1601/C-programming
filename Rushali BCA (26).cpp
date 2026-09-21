//write a C program to calculate the perimeter and the area of a rectangle
#include<stdio.h>
int main()
{
	float l,b,p,a;
	printf("Enter the length of a rectangle : ");
	scanf("%f", &l);
	printf("Enter the breadth of a rectangle : ");
	scanf("%f", &b);
	p=2*(l+b);
	a=l*b;
	printf("Area of the rectangle : %.3f \n", a);
    printf("Perimeter of the rectangle : %.2f \n", p);
	return 0;
}
