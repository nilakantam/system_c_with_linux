#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num;
	printf("Enter the number:\n");
	scanf("%d",&num);
	if(num>0)
		printf("\nPostive number\n");
	else if(num<0)
		printf("\nNegative number\n");
	else 
		printf("\n Zero\n");
	return EXIT_SUCCESS;
}
