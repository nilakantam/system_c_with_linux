//Name - N>Pranathi
//Date - 03-09-2024
//Time - 11:50

#include<stdio.h>
#define PI 3.14
int main()
{
	float radius;
	printf("Enter the radius value:\n");
	scanf("%f",&radius);
	printf("\nArea of the circle is: %.2f" ,PI*(radius*radius));
	printf("\nCircumference of the circle is: %.2f",2*PI*radius);
	printf("\n");
	return 0;
}
