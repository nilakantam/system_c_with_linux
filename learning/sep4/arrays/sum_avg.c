#include<stdio.h>
#include<stdlib.h>
#define N 10
int main()
{
	int arr[N];
	int index;
	int sum = 0;
	float avg;
	size_t array_size;

	printf("Enter 10 elements:\n");
	for(index = 0 ; index < N ; index++)
	{
		scanf("%d",&arr[index]);
	}

	array_size = sizeof(arr)/sizeof(int);
	for(index = 0 ; index < N ; index++)
	{
		sum = sum + arr[index];
	}
	
	avg = (float) sum / array_size;
	printf("%.2f",avg);
	return EXIT_SUCCESS;
}

