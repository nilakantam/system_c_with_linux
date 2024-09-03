#include<stdio.h>
#include<stdlib.h>
#define n 7
int main()
{
	int no_of_days;
	int weeks;
	int days;
	printf("Enter number of days\n");
	scanf("%d",&no_of_days);
	weeks = no_of_days/n;
	days = (int)no_of_days%n;
	printf("\n%d days are %d weeks, %d days\n",no_of_days,weeks,days);
	return EXIT_SUCCESS;
}
