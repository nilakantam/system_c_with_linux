/* Name - N.Pranathi
Date - 03-09-2024
Time - 12:19*/

#include<stdio.h>
int main()
{
	float cel;
	float fah;
	printf("Enter the Celsius value\n");
	scanf("%f",&cel);
	printf("Fahrenheit temperature of %f celsius is %.3f",cel,(cel*9/5)+32);
	
	printf("Enter the Fahrenheit value\n");
	scanf("%f",&fah);
	printf("Celcius temperature of %f Fahrenheit is %.3f",fah,(fah-32)*5/9);
	return 0;
}

