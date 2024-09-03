#include<stdio.h>
#include<stdlib.h>
int main()
{
	int temp;
	printf("Enter the temp value\n");
	scanf("%d",&temp);
	if(temp>30)
		printf("\nIt's hot outside, stay hydrated!");
	else if(temp>20 && temp<30)
		printf("\nThe weather is nice and warm");
	else if(temp>10 && temp<19)
		printf("\nIt's a bit chilly, wear a jacket");
	else if(temp<10)
		printf("It's cold outside , stay warm!");
	return EXIT_SUCCESS;
}

