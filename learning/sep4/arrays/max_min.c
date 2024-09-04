#include<stdio.h>
#include<stdlib.h>
#define N 5
int main()
{

	int arr[N];
	int index;
	int max;
	int min;
	
	printf("Enter 5 array elements\n");
	for(index = 0 ; index < N ; index++)
	{
		scanf("%d",&arr[index]);
	}

	printf("The Elements are:\n");
	for(index = 0 ; index < N ; index++)
	{
		printf("%d\n",arr[index]);
	}

	max = arr[0];
	for(index = 1 ; index < N ; index++)
	{
		if(arr[index] > max)
			max = arr[index];
	}
	
	min = arr[0];
	for(index = 1 ; index < N ; index++)
	{
		if(arr[index] < min)
			min = arr[index];
	}
	
	printf("the minimum and the maimum numbers are %d , %d",min,max);
	

	return 0;
}


