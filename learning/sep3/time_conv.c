#include<stdio.h>
#include<stdlib.h>
#define n 60
int main()
{
	int time;
	int hours;
	int minutes;
	printf("Enter the time in minutes\n");
	scanf("%d",&time);
	hours = (int)time/n;
	minutes = (int)time%n;
	printf("The time is %d hours and %d minutes is",hours,minutes);
	return EXIT_SUCCESS;
}


