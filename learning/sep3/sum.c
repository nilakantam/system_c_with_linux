//Name-N>Pranathi
//Date - 03-09-2024
//Time - 10:20
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a;
	int b;
	int ret_val;
	int ret_val2;
	printf("Enter the values");
	ret_val2=scanf("%d %d",&a,&b);
	
	ret_val=printf("Sum of %d and %d is %d \n",a,b,a+b);
	printf("Number of characters %d \n ",ret_val);
	if(ret_val2<0)
	{
		printf("Error");
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}
