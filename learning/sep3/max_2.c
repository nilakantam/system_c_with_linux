/* Name - N.Pranathi
Date - 03-09-2024
Time - 2:06*/

#include<stdio.h>
int main()
{
	int a;
	int b;
	int res;
	printf("Enter the value of a:\n");
	scanf("%d",&a);
	printf("Enter the value of b:\n");
	scanf("%d",&b);
	res=(a>b)?a:b;
	printf("\nThe maximum of %d and %d is %d",a,b,res);
	printf("\n");
	return 0;
}
