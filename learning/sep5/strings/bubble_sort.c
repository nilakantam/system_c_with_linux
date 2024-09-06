#include<stdio.h>
#include<stdlib.h>
#define N 10
int main()
{
	int arr[N];
	int index;
	int tmp;
	int i;
	int j;

	printf("Enter the 10 elements:\n");
	for(index = 0 ; index < N ; index++)
	{
		scanf("%d",&arr[index]);
	}

	for(i = 0 ; i < N-1 ; i++)
	{ 
		for(j = 0 ; j < N-1-i ; j++)
		{
			if(arr[j] > arr[j+1])
			{
				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}


	printf("The sorted elements are:\n");
	for(index = 0 ; index < N ; index++)
	{
		printf("%d\n",arr[index]);
	}

	return EXIT_SUCCESS;
}


