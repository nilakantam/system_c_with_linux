#include<stdio.h>
#include<stdlib.h>
int main()
{
	int number;
	int sum=0;
	
	printf("Enter the number\n");
	scanf("%d",&number);
	while(number)
	{
		sum = sum + (number%10);
		number=number/10;
	}
	printf("The sum of the digits is %d",sum);
	scanf("\n");
	return EXIT_SUCCESS;
}
