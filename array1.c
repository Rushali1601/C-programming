//Write a C program to take inputs from the user and display the array on the screen
#include<stdio.h>
int main()
{
	int i,l;
	int a[l];
	printf("Enter the size of array: ");
	scanf("%d", &l);
	for(i=0;i<l;i++)
	{
		printf("The array elements are: ");
		scanf("%d", &a[i]);
	}
 printf("The array elements after entering are: ");
	for(i=0;i<l;i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}
